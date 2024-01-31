@interface SCEntitlements : NSObject

+ (id)_setValueForEntitlement:(struct __CFString { } *)a0 expectedElementClass:(Class)a1;
+ (id)_valueForEntitlement:(struct __CFString { } *)a0 expectedClass:(Class)a1;
+ (id)_valueForEntitlement:(struct __CFString { } *)a0 secTask:(struct __SecTask { } *)a1;
+ (id)readCurrentBundleIdentifier;
+ (id)readCurrentServices;

@end
