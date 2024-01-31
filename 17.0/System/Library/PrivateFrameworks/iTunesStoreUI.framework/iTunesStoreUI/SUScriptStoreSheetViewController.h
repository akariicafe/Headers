@interface SUScriptStoreSheetViewController : SUScriptViewController

@property long long productPageStyle;
@property (readonly) long long productPageStyleAutomatic;
@property (readonly) long long productPageStylePad;
@property (readonly) long long productPageStylePhone;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)loadWithProductParameters:(id)a0;
- (void)loadWithProductURL:(id)a0;
- (id)newNativeViewController;

@end
