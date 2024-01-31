@class NSString;

@interface DSAppPermissionsDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *localizedDescription;

+ (id)appsWithPermission:(id)a0 fromAllApps:(id)a1;
+ (id)sortSensorDict:(id)a0;
+ (void)ensureApp:(id)a0 inSensorDict:(id)a1;
+ (id)enumerateAppPermissionPairsFromApps:(id)a0 permissions:(id)a1;
+ (id)localizedDescriptionFromApps:(id)a0 permission:(id)a1;
+ (id)localizedDescriptionFromPermissions:(id)a0;
+ (id)localizedNameForPermission:(id)a0;

- (void).cxx_destruct;

@end
