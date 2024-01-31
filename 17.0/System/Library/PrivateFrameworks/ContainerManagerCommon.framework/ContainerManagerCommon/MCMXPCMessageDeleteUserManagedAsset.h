@class NSString, MCMContainerIdentity;

@interface MCMXPCMessageDeleteUserManagedAsset : MCMXPCMessageWithContainerBase <MCMParametersDeleteUserManagedAsset>

@property (readonly, nonatomic) NSString *sourceRelativePath;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
