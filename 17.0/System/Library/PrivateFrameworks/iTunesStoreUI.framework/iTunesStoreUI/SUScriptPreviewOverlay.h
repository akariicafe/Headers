@class NSString;

@interface SUScriptPreviewOverlay : SUScriptObject

@property (copy) id height;
@property (readonly, getter=isVisible) id visible;
@property (copy) id right;
@property (copy) id top;
@property (copy) NSString *userInfo;
@property (copy) id width;

+ (void)initialize;
+ (id)webScriptNameForSelector:(SEL)a0;
+ (id)webScriptNameForKeyName:(id)a0;

- (void)hide:(id)a0;
- (id)_className;
- (void)show:(id)a0;
- (id)attributeKeys;
- (id)scriptAttributeKeys;
- (void)loadURLRequest:(id)a0;

@end
