@class NSString, NSDictionary;

@interface _CDMDCSContextualPredicate : _CDContextualPredicate <_CDDictionaryEncoding>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSDictionary *parameters;

+ (BOOL)supportsSecureCoding;
+ (id)predicateForIsConnectedToCar;
+ (id)predicates;
+ (id)_predicateForChangeAtKeyPath:(id)a0 identifier:(id)a1;
+ (id)orPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForBacklightOnStatus;
+ (id)contextualPredicateForKeyPaths:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForNetworkQualityFair;
+ (id)_predicateForKeyPath:(id)a0 withPredicate:(id)a1 identifier:(id)a2;
+ (id)predicateForNextAlarm;
+ (id)predicateForUserIsLeavingHome;
+ (id)predicateForUserIsArrivingAtHome;
+ (id)predicateWithIdentifier:(id)a0;
+ (id)predicateForForegroundApp;
+ (id)notPredicateWithSubpredicate:(id)a0 identifier:(id)a1;
+ (id)_predicateForKeyPath:(id)a0 equalToValue:(id)a1 identifier:(id)a2;
+ (id)predicateForIsConnectedToAudioBluetoothDevice;
+ (id)andPredicateWithSubpredicates:(id)a0 identifier:(id)a1;
+ (id)predicateForNetworkQualityBad;
+ (id)predicateForFirstPartyWorkoutMatchingTypes:(id)a0 states:(id)a1;
+ (id)predicateForPhotosAppBecameForeground;

- (unsigned long long)hash;
- (id)plistDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 parameters:(id)a1;
- (id)initWithPlistDictionary:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
