@class NSString;

@interface NUSoftwareVersion : NSObject <NSCopying>

@property (copy) NSString *platform;
@property (copy) NSString *buildNumber;
@property (copy) NSString *appVersion;
@property long long schemaRevision;

+ (id)systemBuildVersion;
+ (id)frameworkVersion;
+ (id)_frameworkVersion;
+ (id)currentSoftwareVersion;
+ (id)softwareVersionFromArchivalRepresentation:(id)a0;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)archivalRepresentation;
- (BOOL)isEqualToSoftwareVersion:(id)a0;

@end
