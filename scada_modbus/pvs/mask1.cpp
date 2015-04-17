////////////////////////////////////////////////////////////////////////////
//
// show_mask1 for ProcessViewServer created: Thu Apr 16 16:40:20 2015
//
////////////////////////////////////////////////////////////////////////////
#include "pvapp.h"

// _begin_of_generated_area_ (do not edit -> use ui2pvc) -------------------

// our mask contains the following objects
enum {
  ID_MAIN_WIDGET = 0,
  tx_A,
  tx_B,
  Y_tx_A,
  X_tx_A,
  Y_tx_B,
  X_tx_B,
  tx_A_lab,
  tx_B_lab,
  tx_A_but,
  tx_A_status,
  tx_B_but,
  tx_B_status,
  ID_END_OF_WIDGETS
};

// our mask contains the following widget names
  static const char *widgetName[] = {
  "ID_MAIN_WIDGET",
  "tx_A",
  "tx_B",
  "Y_tx_A",
  "X_tx_A",
  "Y_tx_B",
  "X_tx_B",
  "tx_A_lab",
  "tx_B_lab",
  "tx_A_but",
  "tx_A_status",
  "tx_B_but",
  "tx_B_status",
  "ID_END_OF_WIDGETS",
  ""};

  static const char *toolTip[] = {
  "",
  "",
  "",
  "Y_tx_A",
  "X_tx_A",
  "Y_tx_B",
  "X_tx_B",
  "tx_A_lab",
  "tx_B_lab",
  "tx_A_but",
  "tx_A_status",
  "tx_B_but",
  "tx_B_status",
  ""};

  static const char *whatsThis[] = {
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  "",
  ""};

  static const int widgetType[ID_END_OF_WIDGETS+1] = {
  0,
  TQwtPlotWidget,
  TQwtPlotWidget,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQLabel,
  TQPushButton,
  TQLabel,
  TQPushButton,
  TQLabel,
  -1 };

static int generated_defineMask(PARAM *p)
{
  int w,h,depth;

  if(p == NULL) return 1;
  if(widgetName[0] == NULL) return 1; // suppress unused warning
  w = h = depth = strcmp(toolTip[0],whatsThis[0]);
  if(widgetType[0] == -1) return 1;
  if(w==h) depth=0; // fool the compiler
  pvStartDefinition(p,ID_END_OF_WIDGETS);

  pvQwtPlotWidget(p,tx_A,0,10,1000);
  pvSetGeometry(p,tx_A,111,264,500,300);
  qpwSetCanvasBackground(p,tx_A,242,241,240);
  qpwEnableAxis(p,tx_A,yLeft);
  qpwEnableAxis(p,tx_A,xBottom);
  pvSetFont(p,tx_A,"Ubuntu",11,0,0,0,0);

  pvQwtPlotWidget(p,tx_B,0,10,1000);
  pvSetGeometry(p,tx_B,762,264,500,300);
  qpwSetCanvasBackground(p,tx_B,242,241,240);
  qpwEnableAxis(p,tx_B,yLeft);
  qpwEnableAxis(p,tx_B,xBottom);
  pvSetFont(p,tx_B,"Ubuntu",11,0,0,0,0);

  pvQLabel(p,Y_tx_A,0);
  pvSetGeometry(p,Y_tx_A,12,387,99,30);
  pvSetText(p,Y_tx_A,pvtr("Frequency (Hz)"));
  pvSetFont(p,Y_tx_A,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,Y_tx_A,pvtr("Y_tx_A"));

  pvQLabel(p,X_tx_A,0);
  pvSetGeometry(p,X_tx_A,318,576,150,30);
  pvSetText(p,X_tx_A,pvtr("Last 100 read values"));
  pvSetFont(p,X_tx_A,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,X_tx_A,pvtr("X_tx_A"));

  pvQLabel(p,Y_tx_B,0);
  pvSetGeometry(p,Y_tx_B,666,387,99,30);
  pvSetText(p,Y_tx_B,pvtr("Frequency (Hz)"));
  pvSetFont(p,Y_tx_B,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,Y_tx_B,pvtr("Y_tx_B"));

  pvQLabel(p,X_tx_B,0);
  pvSetGeometry(p,X_tx_B,972,576,150,30);
  pvSetText(p,X_tx_B,pvtr("Last 100 read values"));
  pvSetFont(p,X_tx_B,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,X_tx_B,pvtr("X_tx_B"));

  pvQLabel(p,tx_A_lab,0);
  pvSetGeometry(p,tx_A_lab,273,117,205,50);
  pvSetText(p,tx_A_lab,pvtr("Transformer A"));
  pvSetFont(p,tx_A_lab,"Ubuntu",20,1,0,0,0);
  pvToolTip(p,tx_A_lab,pvtr("tx_A_lab"));
  pvSetStyle(p,tx_A_lab,Box,-1,-1,-1);
  pvSetStyle(p,tx_A_lab,-1,Raised,-1,-1);
  pvSetStyle(p,tx_A_lab,-1,-1,4,-1);

  pvQLabel(p,tx_B_lab,0);
  pvSetGeometry(p,tx_B_lab,933,117,205,50);
  pvSetText(p,tx_B_lab,pvtr("Transformer B"));
  pvSetFont(p,tx_B_lab,"Ubuntu",20,1,0,0,0);
  pvToolTip(p,tx_B_lab,pvtr("tx_B_lab"));
  pvSetStyle(p,tx_B_lab,Box,-1,-1,-1);
  pvSetStyle(p,tx_B_lab,-1,Raised,-1,-1);
  pvSetStyle(p,tx_B_lab,-1,-1,4,-1);

  pvQPushButton(p,tx_A_but,0);
  pvSetGeometry(p,tx_A_but,378,198,99,30);
  pvSetText(p,tx_A_but,pvtr("Disabled"));
  pvSetFont(p,tx_A_but,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,tx_A_but,pvtr("tx_A_but"));

  pvQLabel(p,tx_A_status,0);
  pvSetGeometry(p,tx_A_status,279,198,99,30);
  pvSetText(p,tx_A_status,pvtr("Status:"));
  pvSetFont(p,tx_A_status,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,tx_A_status,pvtr("tx_A_status"));

  pvQPushButton(p,tx_B_but,0);
  pvSetGeometry(p,tx_B_but,1038,195,99,30);
  pvSetText(p,tx_B_but,pvtr("Disabled"));
  pvSetFont(p,tx_B_but,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,tx_B_but,pvtr("tx_B_but"));

  pvQLabel(p,tx_B_status,0);
  pvSetGeometry(p,tx_B_status,939,195,99,30);
  pvSetText(p,tx_B_status,pvtr("Status:"));
  pvSetFont(p,tx_B_status,"Ubuntu",11,0,0,0,0);
  pvToolTip(p,tx_B_status,pvtr("tx_B_status"));


  pvEndDefinition(p);
  return 0;
}

// _end_of_generated_area_ (do not edit -> use ui2pvc) ---------------------

#include "mask1_slots.h"

static int defineMask(PARAM *p)
{
  if(p == NULL) return 1;
  generated_defineMask(p);
  // (todo: add your code here)
  return 0;
}


static int showData(PARAM *p, DATA *d)
{
  if(p == NULL) return 1;
  if(d == NULL) return 1;
  return 0;
}

static int readData(DATA *d) // from shared memory, database or something else
{
  if(d == NULL) return 1;
  // (todo: add your code here)
  return 0;
}


int show_mask1(PARAM *p)
{
  DATA d;
  char event[MAX_EVENT_LENGTH];
  char text[MAX_EVENT_LENGTH];
  char str1[MAX_EVENT_LENGTH];
  int  i,w,h,val,x,y,button,ret;
  float xval, yval;

  defineMask(p);
  //rlSetDebugPrintf(1);
  if((ret=slotInit(p,&d)) != 0) return ret;
  readData(&d); // from shared memory, database or something else
  showData(p,&d);
  pvClearMessageQueue(p);
  while(1)
  {
    pvPollEvent(p,event);
    switch(pvParseEvent(event, &i, text))
    {
      case NULL_EVENT:
        readData(&d); // from shared memory, database or something else
        showData(p,&d);
        if((ret=slotNullEvent(p,&d)) != 0) return ret;
        break;
      case BUTTON_EVENT:
        if(trace) printf("BUTTON_EVENT id=%d\n",i);
        if((ret=slotButtonEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_PRESSED_EVENT:
        if(trace) printf("BUTTON_PRESSED_EVENT id=%d\n",i);
        if((ret=slotButtonPressedEvent(p,i,&d)) != 0) return ret;
        break;
      case BUTTON_RELEASED_EVENT:
        if(trace) printf("BUTTON_RELEASED_EVENT id=%d\n",i);
        if((ret=slotButtonReleasedEvent(p,i,&d)) != 0) return ret;
        break;
      case TEXT_EVENT:
        if(trace) printf("TEXT_EVENT id=%d %s\n",i,text);
        if((ret=slotTextEvent(p,i,&d,text)) != 0) return ret;
        break;
      case SLIDER_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("SLIDER_EVENT val=%d\n",val);
        if((ret=slotSliderEvent(p,i,&d,val)) != 0) return ret;
        break;
      case CHECKBOX_EVENT:
        if(trace) printf("CHECKBOX_EVENT id=%d %s\n",i,text);
        if((ret=slotCheckboxEvent(p,i,&d,text)) != 0) return ret;
        break;
      case RADIOBUTTON_EVENT:
        if(trace) printf("RADIOBUTTON_EVENT id=%d %s\n",i,text);
        if((ret=slotRadioButtonEvent(p,i,&d,text)) != 0) return ret;
        break;
      case GL_INITIALIZE_EVENT:
        if(trace) printf("you have to call initializeGL()\n");
        if((ret=slotGlInitializeEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_PAINT_EVENT:
        if(trace) printf("you have to call paintGL()\n");
        if((ret=slotGlPaintEvent(p,i,&d)) != 0) return ret;
        break;
      case GL_RESIZE_EVENT:
        sscanf(text,"(%d,%d)",&w,&h);
        if(trace) printf("you have to call resizeGL(w,h)\n");
        if((ret=slotGlResizeEvent(p,i,&d,w,h)) != 0) return ret;
        break;
      case GL_IDLE_EVENT:
        if((ret=slotGlIdleEvent(p,i,&d)) != 0) return ret;
        break;
      case TAB_EVENT:
        sscanf(text,"(%d)",&val);
        if(trace) printf("TAB_EVENT(%d,page=%d)\n",i,val);
        if((ret=slotTabEvent(p,i,&d,val)) != 0) return ret;
        break;
      case TABLE_TEXT_EVENT:
        sscanf(text,"(%d,%d,",&x,&y);
        pvGetText(text,str1);
        if(trace) printf("TABLE_TEXT_EVENT(%d,%d,\"%s\")\n",x,y,str1);
        if((ret=slotTableTextEvent(p,i,&d,x,y,str1)) != 0) return ret;
        break;
      case TABLE_CLICKED_EVENT:
        sscanf(text,"(%d,%d,%d)",&x,&y,&button);
        if(trace) printf("TABLE_CLICKED_EVENT(%d,%d,button=%d)\n",x,y,button);
        if((ret=slotTableClickedEvent(p,i,&d,x,y,button)) != 0) return ret;
        break;
      case SELECTION_EVENT:
        sscanf(text,"(%d,",&val);
        pvGetText(text,str1);
        if(trace) printf("SELECTION_EVENT(column=%d,\"%s\")\n",val,str1);
        if((ret=slotSelectionEvent(p,i,&d,val,str1)) != 0) return ret;
        break;
      case CLIPBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("CLIPBOARD_EVENT(id=%d)\n",val);
        if(trace) printf("clipboard = \n%s\n",p->clipboard);
        if((ret=slotClipboardEvent(p,i,&d,val)) != 0) return ret;
        break;
      case RIGHT_MOUSE_EVENT:
        if(trace) printf("RIGHT_MOUSE_EVENT id=%d text=%s\n",i,text);
        if((ret=slotRightMouseEvent(p,i,&d,text)) != 0) return ret;
        break;
      case KEYBOARD_EVENT:
        sscanf(text,"(%d",&val);
        if(trace) printf("KEYBOARD_EVENT modifier=%d key=%d\n",i,val);
        if((ret=slotKeyboardEvent(p,i,&d,val,i)) != 0) return ret;
        break;
      case PLOT_MOUSE_MOVED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_MOVE %f %f\n",xval,yval);
        if((ret=slotMouseMovedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_PRESSED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_PRESSED %f %f\n",xval,yval);
        if((ret=slotMousePressedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case PLOT_MOUSE_RELEASED_EVENT:
        sscanf(text,"(%f,%f)",&xval,&yval);
        if(trace) printf("PLOT_MOUSE_RELEASED %f %f\n",xval,yval);
        if((ret=slotMouseReleasedEvent(p,i,&d,xval,yval)) != 0) return ret;
        break;
      case MOUSE_OVER_EVENT:
        sscanf(text,"%d",&val);
        if(trace) printf("MOUSE_OVER_EVENT %d\n",val);
        if((ret=slotMouseOverEvent(p,i,&d,val)) != 0) return ret;
        break;
      case USER_EVENT:
        if(trace) printf("USER_EVENT id=%d %s\n",i,text);
        if((ret=slotUserEvent(p,i,&d,text)) != 0) return ret;
        break;
      default:
        if(trace) printf("UNKNOWN_EVENT id=%d %s\n",i,text);
        break;
    }
  }
}
