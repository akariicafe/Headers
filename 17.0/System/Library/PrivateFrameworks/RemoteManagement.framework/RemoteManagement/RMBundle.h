@class NSBundle;

@interface RMBundle : NSObject

@property (class, readonly) NSBundle *remoteManagementBundle;
@property (class, readonly) long long managementScope;

+ (void)setManagementScope:(long long)a0;

@end
