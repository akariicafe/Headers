@class NSArray, UITextInputTraits, UIView;

@interface SWWebView : WKWebView

@property (retain, nonatomic) UIView *accessoryView;
@property (retain, nonatomic) UITextInputTraits *overridenTraits;
@property (copy, nonatomic) NSArray *removedMenuIdentifiers;

- (void)setInputAccessoryView:(id)a0;
- (id)inputAccessoryView;
- (void)setTextInputTraits:(id)a0;
- (void).cxx_destruct;
- (id)_textInputTraits;
- (void)removeMenusForIdentifiers:(id)a0;
- (void)setShortcutsBarWithLeadingGroups:(id)a0 trailingGroups:(id)a1;

@end
