@class SUScriptReview;

@interface SUScriptComposeReviewViewController : SUScriptViewController

@property (readonly) SUScriptReview *review;

+ (id)webScriptNameForKey:(const char *)a0;

- (id)init;
- (id)_className;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)setReview:(id)a0;
- (id)initWithScriptReview:(id)a0 clientInterface:(id)a1;
- (id)newNativeViewController;

@end
