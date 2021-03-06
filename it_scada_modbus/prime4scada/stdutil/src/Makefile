CC=gcc
AR=ar

srcdir=.
top_srcdir=.

buildtoolsdir=$(top_srcdir)/../

# where to put libraries and test/example programs
TARGET_DIR = ../lib
APP_DIR = ../bin

# build thread safe library and enable std locking mechanisms (stdthreads.h)
CFLAGS += -D_REENTRANT 

# SAFETY_CHECKS - check and be sure some condition that should be true is true (sanity checks)
CFLAGS += -DSTDSAFETY_CHECKS

# BOUNDS_CHECKS - try to check that the user is using the DS's properly (doesn't check all uses)
CFLAGS += -DSTDBOUNDS_CHECKS 

# other flags
CFLAGS += -fPIC -g -Wall -O2 -I.  -I$(srcdir)

# add pthreads library if necessary
LIBS = -lpthread 

# stdutil library object files
OBJS = stdutil.o stderror.o stdthread.o stdtime.o stdfd.o stdit.o stdarr.o stdcarr.o stddll.o stdhash.o stdskl.o

# targets
LIBSTDUTIL = $(TARGET_DIR)/libstdutil.a
TESTS = $(APP_DIR)/stddll_test $(APP_DIR)/stdarr_test $(APP_DIR)/stdcarr_test $(APP_DIR)/stdhash_test
TARGETS = $(LIBSTDUTIL) $(TESTS)

$(LIBSTDUTIL): $(OBJS)
	$(buildtoolsdir)/mkinstalldirs $(TARGET_DIR)
	$(AR) -rs $(LIBSTDUTIL) $(OBJS)

$(APP_DIR):
	$(buildtoolsdir)/mkinstalldirs $(APP_DIR)

tests: $(TESTS)
	$(APP_DIR)/stddll_test
	$(APP_DIR)/stdarr_test
	$(APP_DIR)/stdcarr_test 
	$(APP_DIR)/stdhash_test

$(APP_DIR)/stddll_test: $(LIBSTDUTIL) $(APP_DIR) stdtest/stddll_test.c
	$(CC) $(CFLAGS) -o $(APP_DIR)/stddll_test stdtest/stddll_test.c $(LIBSTDUTIL) $(LIBS)

$(APP_DIR)/stdarr_test: $(APP_DIR)/stddll_test  $(APP_DIR) stdtest/stdarr_test.c
	$(CC) $(CFLAGS) -o $(APP_DIR)/stdarr_test stdtest/stdarr_test.c $(LIBSTDUTIL) $(LIBS)

$(APP_DIR)/stdcarr_test: $(APP_DIR)/stddll_test $(APP_DIR) stdtest/stdcarr_test.c
	$(CC) $(CFLAGS) -o $(APP_DIR)/stdcarr_test stdtest/stdcarr_test.c $(LIBSTDUTIL) $(LIBS) 

$(APP_DIR)/stdhash_test: $(LIBSTDUTIL) $(APP_DIR) stdtest/stdhash_test.c
	$(CC) $(CFLAGS) -o $(APP_DIR)/stdhash_test stdtest/stdhash_test.c $(LIBSTDUTIL) $(LIBS)

clean:
	rm -f *.o core* *~ stdutil/*~ stdutil/private/*~ stdtest/*~ $(TARGETS)

distclean: clean
	rm -f config.* Makefile
