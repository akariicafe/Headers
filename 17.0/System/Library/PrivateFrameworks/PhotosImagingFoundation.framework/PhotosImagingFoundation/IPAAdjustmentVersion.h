@class NSString;

@interface IPAAdjustmentVersion : NSObject

@property (readonly, nonatomic) unsigned long long majorVersion;
@property (readonly, nonatomic) unsigned long long minorVersion;
@property (readonly, nonatomic) NSString *platform;

+ (void)initialize;
+ (id)versionForMajor:(unsigned long long)a0 minor:(unsigned long long)a1 platform:(id)a2;
+ (id)validatePlatformString:(id)a0;
+ (id)versionForMajor:(unsigned long long)a0 minor:(unsigned long long)a1;
+ (id)versionFromArchivalRepresentation:(id)a0;

- (unsigned long long)hash;
- (long long)compare:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (void)setMinorVersion:(unsigned long long)a0;
- (BOOL)isEqualToAdjustmentVersion:(id)a0;
- (id)archivalRepresentation;
- (id)initWithMajor:(unsigned long long)a0 minor:(unsigned long long)a1 platform:(id)a2;

@end
