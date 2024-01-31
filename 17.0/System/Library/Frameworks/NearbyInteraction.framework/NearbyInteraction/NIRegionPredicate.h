@class NSString;

@interface NIRegionPredicate : NSObject <NSCopying, NSSecureCoding> {
    long long _devicePresencePreset;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *name;
@property long long regionSizeCategory;
@property (readonly) float radius;
@property long long preferredUpdateRate;
@property BOOL requiresUserIntent;

- (unsigned long long)hash;
- (id)shortDescription;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionInternal;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2;
- (void)setDevicePresencePreset:(long long)a0;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2 requiresUserIntent:(BOOL)a3 devicePresencePreset:(long long)a4;
- (id)initWithName:(id)a0 devicePresencePreset:(long long)a1;
- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(BOOL)a4;
- (id)description;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 radius:(float)a1;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0 regionSizeCategory:(long long)a1 radius:(float)a2 preferredUpdateRate:(long long)a3 requiresUserIntent:(BOOL)a4 devicePresencePreset:(long long)a5;
- (id)initWithName:(id)a0 radius:(float)a1 preferredUpdateRate:(long long)a2 requiresUserIntent:(BOOL)a3;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)devicePresencePreset;

@end
