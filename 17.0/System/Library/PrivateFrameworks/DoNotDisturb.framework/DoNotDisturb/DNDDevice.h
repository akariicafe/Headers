@interface DNDDevice : NSObject <NSCopying>

@property (readonly, nonatomic) unsigned long long deviceClass;
@property (readonly, nonatomic) unsigned long long deviceCapabilities;
@property (readonly, nonatomic) struct { long long majorVersion; long long minorVersion; long long patchVersion; } frameworkVersion;

+ (id)deviceWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1;
+ (id)currentDevice;

- (unsigned long long)hash;
- (id)description;
- (id)initWithClass:(unsigned long long)a0 deviceCapabilities:(unsigned long long)a1 frameworkVersion:(struct { long long x0; long long x1; long long x2; })a2;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
