@class NSString;

@interface MPSGraphExecutableSerializationDescriptor : MPSGraphObject

@property BOOL append;
@property unsigned long long deploymentPlatform;
@property (retain) NSString *minimumDeploymentTarget;

- (id)init;
- (void).cxx_destruct;
- (struct MPSGraphVersion { long long x0; long long x1; long long x2; })getDeploymentTargetAsOSVersion;
- (id)getPackageVersionString;
- (void)validateMinimumDeploymentTargetForPlatform;

@end
