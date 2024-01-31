@class MCMContainerIdentity;

@interface MCMXPCMessageUserManagedAssetsPath : MCMXPCMessageWithContainerBase <MCMParametersUserManagedAssetsPath>

@property (readonly, nonatomic, getter=isRelative) BOOL relative;
@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) MCMContainerIdentity *containerIdentity;

@end
