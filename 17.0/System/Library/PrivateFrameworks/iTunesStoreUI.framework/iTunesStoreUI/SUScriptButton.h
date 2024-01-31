@class NSString, UIImage, WebScriptObject, SUScriptCanvasContext;

@interface SUScriptButton : SUScriptObject <SUScriptNavigationItem> {
    id _action;
    SUScriptCanvasContext *_canvas;
    WebScriptObject *_target;
}

@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } imageEdgeInsets;
@property (nonatomic) BOOL shouldPerformDefaultAction;
@property (retain) id action;
@property (retain) SUScriptCanvasContext *canvas;
@property BOOL enabled;
@property BOOL loading;
@property (readonly) id showingConfirmation;
@property (retain) NSString *subtitle;
@property (retain) NSString *style;
@property long long tag;
@property (retain) NSString *title;
@property (retain) WebScriptObject *target;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)buttonItem;
- (id)_action;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (id)_boxedNativeButton;
- (id)_initSUScriptButton;
- (id)_nativeButton;
- (id)_systemItemString;
- (void)hideConfirmationAnimated:(BOOL)a0;
- (id)initWithSystemItemString:(id)a0;
- (id)nativeButtonOfType:(int)a0;
- (void)performActionWithArguments:(id)a0;
- (void)setImageInsetsTop:(float)a0 left:(float)a1 bottom:(float)a2 right:(float)a3;
- (void)setImageWithURLString:(id)a0 scale:(id)a1;
- (void)setNativeButton:(id)a0;
- (void)showConfirmationWithTitle:(id)a0 animated:(BOOL)a1;

@end
