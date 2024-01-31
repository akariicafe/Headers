@class NSString, DNDModeAssertionLifetime, NSDate;

@interface DNDModeAssertionDetails : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isUserRequested) BOOL userRequested;
@property (readonly, copy, nonatomic) NSDate *userVisibleEndDate;
@property (readonly, copy, nonatomic) NSDate *modeConfigurationModifiedDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *modeIdentifier;
@property (readonly, copy, nonatomic) DNDModeAssertionLifetime *lifetime;
@property (readonly, nonatomic) unsigned long long reason;

+ (id)detailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2;
+ (id)userRequestedAssertionDetailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2;
+ (id)detailsWithIdentifier:(id)a0 modeIdentifier:(id)a1 lifetime:(id)a2 reason:(unsigned long long)a3;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithDetails:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithIdentifier:(id)a0 modeIdentifier:(id)a1 modeConfigurationModifiedDate:(id)a2 lifetime:(id)a3 reason:(unsigned long long)a4 userVisibleEndDate:(id)a5;

@end
