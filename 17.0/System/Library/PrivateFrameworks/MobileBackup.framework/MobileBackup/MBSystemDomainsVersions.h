@interface MBSystemDomainsVersions : NSObject

@property (nonatomic) double version;
@property (nonatomic) double minSupportedVersion;
@property (nonatomic) double maxSupportedVersion;

- (id)init;
- (id)initWithDefaultSystemDomainsPlist;
- (id)initWithVersion:(double)a0 minSupportedVersion:(double)a1 maxSupportedVersion:(double)a2;

@end
