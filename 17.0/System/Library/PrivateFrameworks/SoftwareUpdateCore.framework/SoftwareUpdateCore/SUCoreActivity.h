@class NSString, NSNumber, NSDate;

@interface SUCoreActivity : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *activityName;
@property (retain, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSDate *runDate;
@property (retain, nonatomic) NSNumber *batteryLevelGreaterThan;
@property (retain, nonatomic) NSNumber *batteryLevelLessThan;
@property (nonatomic) int plugInState;
@property (nonatomic) int screenOnState;
@property (nonatomic) int networkState;
@property (nonatomic) int wifiState;
@property (nonatomic) int waking;
@property (nonatomic) int phoneCallState;
@property (nonatomic) int carplayState;
@property (nonatomic) int mediaPlayingState;

+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1;
+ (id)backlightOnPredicate:(BOOL)a0;
+ (id)batteryLevelPredicateGreaterThan:(id)a0;
+ (id)batteryLevelPredicateLessThan:(id)a0;
+ (id)carplayPredicate:(BOOL)a0;
+ (id)mediaPlayingPredicate:(BOOL)a0;
+ (id)networkPredicate:(BOOL)a0;
+ (id)phoneCallPredicate:(BOOL)a0;
+ (id)pluggedInPredicate:(BOOL)a0;
+ (id)systemDatePredicate:(id)a0;
+ (id)wifiAvailablePredicate:(BOOL)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)_clientIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)_qualityOfService;
- (unsigned long long)_deviceSet;
- (BOOL)_mustWake;
- (BOOL)_boolForTriState:(int)a0 defaultValue:(BOOL)a1;
- (id)_dismissalPredicate;
- (id)_stringForTriState:(int)a0;
- (id)createContextualPredicate;
- (id)createRegistrationWithHandler:(id /* block */)a0;
- (id)initWithActivityName:(id)a0 options:(id)a1;

@end
