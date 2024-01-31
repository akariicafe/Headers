@class NSString;

@interface HMFSoftwareVersion : HMFVersion

@property (readonly, copy) NSString *buildVersion;
@property (readonly, copy) NSString *shortVersionString;

+ (BOOL)supportsSecureCoding;
+ (id)versionFromOperatingSystemVersion:(struct { long long x0; long long x1; long long x2; })a0;

- (void)encodeWithCoder:(id)a0;
- (id)versionString;
- (long long)compare:(id)a0;
- (id)localizedDescription;
- (void).cxx_destruct;
- (struct { long long x0; long long x1; long long x2; })operatingSystemVersion;
- (id)initWithCoder:(id)a0;
- (id)initWithVersionString:(id)a0;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2 buildVersion:(id)a3;
- (id)initWithMajorVersion:(unsigned long long)a0 minorVersion:(unsigned long long)a1 updateVersion:(unsigned long long)a2;

@end
