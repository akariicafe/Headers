@class NSNumber;

@interface SUScriptReportAProblemViewController : SUScriptViewController

@property (readonly) NSNumber *adamID;

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)a0;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (void)setAdamID:(id)a0;
- (id)scriptAttributeKeys;
- (id)initWithAdamID:(id)a0 clientInterface:(id)a1;
- (id)newNativeViewController;

@end
