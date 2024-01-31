@class NSURL;

@interface IRDataContainer : NSObject

@property (retain, nonatomic) NSURL *containerRootURL;
@property (nonatomic) long long extensionHandle;

- (id)init;
- (void).cxx_destruct;
- (void)_releaseExtensionHandle;
- (void)_releaseQuery:(struct container_query_s { } *)a0;
- (id)getContainerPathWithSandboxAccess;

@end
