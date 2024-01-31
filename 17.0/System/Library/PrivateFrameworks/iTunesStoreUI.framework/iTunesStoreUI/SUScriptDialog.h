@class NSString, NSNumber;

@interface SUScriptDialog : SUScriptObject {
    NSString *_body;
    id _buttons;
    NSNumber *_cancelButtonIndex;
    NSNumber *_destructiveButtonIndex;
    id _textFields;
    NSString *_title;
}

@property (retain) NSString *body;
@property (retain) id buttons;
@property (retain) NSNumber *cancelButtonIndex;
@property (retain) NSNumber *destructiveButtonIndex;
@property (retain) id textFields;
@property (retain) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)dismiss;
- (void)dealloc;
- (void)show;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)_logSheetWarnings;
- (id)_nativeDialog;
- (void)showFromDOMElement:(id)a0;
- (void)showSheet;
- (void)showSheetInPopOver:(id)a0;

@end
