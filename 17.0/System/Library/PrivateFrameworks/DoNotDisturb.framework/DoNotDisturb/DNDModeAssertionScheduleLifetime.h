@class NSString;

@interface DNDModeAssertionScheduleLifetime : DNDModeAssertionLifetime

@property (readonly, copy, nonatomic) NSString *scheduleIdentifier;
@property (readonly, nonatomic) unsigned long long behavior;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithScheduleIdentifier:(id)a0 behavior:(unsigned long long)a1;
- (unsigned long long)lifetimeType;

@end
