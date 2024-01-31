@interface IMCoreCommSafetyHelper : NSObject

+ (id)sharedInstance;

- (void)getOpenChatURLWith:(id /* block */)a0;
- (void)addressesForParents:(id)a0 completion:(id /* block */)a1;
- (id)_urlFromAddressList:(id)a0;

@end
