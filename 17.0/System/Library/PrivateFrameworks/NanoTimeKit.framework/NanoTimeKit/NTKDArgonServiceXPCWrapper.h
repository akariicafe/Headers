@class NSString;

@interface NTKDArgonServiceXPCWrapper : NSObject <NTKFaceSupportServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedXPCWrapper;

- (void)queryForNewFaces:(id /* block */)a0;
- (void)displayUserNotificationForKeyDescriptor:(id)a0 completion:(id /* block */)a1;
- (void)requestCurrentEnvironment:(id /* block */)a0;
- (void)requestResetOnNextLaunch:(id /* block */)a0;
- (void)setCurrentEnvironment:(long long)a0 completion:(id /* block */)a1;
- (void)knownKeyDescriptors:(id /* block */)a0;
- (void)ingestKeyDescriptor:(id)a0 withMethod:(unsigned long long)a1 completion:(id /* block */)a2;

@end
