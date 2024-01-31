@interface SFCollaborationUserDefaultsManager : NSObject

+ (void)requestCollaborativeModeForContentIdentifier:(id)a0 completionHandler:(id /* block */)a1;
+ (void)saveCollaborativeMode:(id)a0 forContentIdentifier:(id)a1;
+ (id)_createRemoteDataProxyWithErrorHandler:(id /* block */)a0;

@end
