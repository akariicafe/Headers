@class NSString;

@interface SUScriptCalloutView : SUScriptObject {
    BOOL _isVisible;
    NSString *_subtitle;
    NSString *_title;
}

@property (copy) NSString *subtitle;
@property (copy) NSString *title;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (void)dealloc;
- (id)_className;
- (void)setVisible:(BOOL)a0 animated:(BOOL)a1;
- (id)attributeKeys;
- (void)setTitle:(id)a0 subtitle:(id)a1;
- (id)scriptAttributeKeys;
- (void)_menuDidHideNotification:(id)a0;
- (void)_reloadUntructedString;
- (void)_resetCalloutBar;
- (void)_setupCalloutBar;
- (void)setTargetX:(double)a0 y:(double)a1 width:(double)a2 height:(double)a3;

@end
