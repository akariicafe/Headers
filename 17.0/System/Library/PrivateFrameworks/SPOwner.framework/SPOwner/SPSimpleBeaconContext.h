@class NSString, NSArray;

@interface SPSimpleBeaconContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) unsigned long long fetchProperties;
@property (nonatomic) BOOL sendInitialBeacons;
@property (copy, nonatomic) NSArray *filterBeaconUUIDs;

+ (id)defaultContext;
+ (id)fmipItemContext;
+ (id)deviceManagerContext;
+ (id)fmipItemContextForBeaconUUIDs:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFetchProperties:(unsigned long long)a0 filterBeaconUUIDs:(id)a1;

@end
