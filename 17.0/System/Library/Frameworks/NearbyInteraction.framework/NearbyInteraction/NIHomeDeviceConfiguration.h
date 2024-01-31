@class NSData, NSArray, NSString;

@interface NIHomeDeviceConfiguration : NIConfiguration {
    NSArray *_monitoredRegions;
    NSString *_regionDescription;
}

@property long long antennaDiversityOverride;
@property unsigned long long allowedDevices;
@property (copy) NSData *sessionKey;
@property (getter=isAnchor) BOOL anchor;
@property (copy) NSArray *monitoredRegions;
@property long long minimumPreferredUpdatedRate;

+ (BOOL)supportsSecureCoding;
+ (id)new;

- (id)init;
- (unsigned long long)hash;
- (id)initWithAllowedDevices:(unsigned long long)a0 sessionKey:(id)a1 asAnchor:(BOOL)a2 regions:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)description;
- (void).cxx_destruct;
- (void)_updateRegionDescription;
- (BOOL)canUpdateToConfiguration:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithRegions:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
