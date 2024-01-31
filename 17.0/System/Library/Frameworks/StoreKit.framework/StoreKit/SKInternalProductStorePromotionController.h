@interface SKInternalProductStorePromotionController : NSObject

+ (id)defaultController;

- (void)_handleReply:(id)a0 error:(id)a1 completionHandler:(id /* block */)a2;
- (void)fetchOverridesForVisibilityAndOrderForApplicationBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end
