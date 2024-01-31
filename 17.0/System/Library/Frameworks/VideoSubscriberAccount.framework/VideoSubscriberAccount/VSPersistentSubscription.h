@class NSString, NSArray, NSDate, NSNumber;

@interface VSPersistentSubscription : NSManagedObject

@property (copy, nonatomic) NSString *derivedSubscriptionInfo;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *mostRecentSaveDate;
@property (copy, nonatomic) NSNumber *sourceKind;
@property (copy, nonatomic) NSString *sourceIdentifier;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSNumber *accessLevel;
@property (copy, nonatomic) NSArray *tierIdentifiers;
@property (copy, nonatomic) NSString *subscriberIdentifierHash;
@property (copy, nonatomic) NSString *billingIdentifier;
@property (copy, nonatomic) NSString *providedSubscriptionInfo;

+ (id)keyPathsForValuesAffectingDerivedSubscriptionInfo;

- (void)awakeFromInsert;
- (void)awakeFromFetch;
- (void)setExpirationDate:(id)a0;
- (void)setCreationDate:(id)a0;
- (void)setAccessLevel:(id)a0;
- (void)didChangeValueForKey:(id)a0;
- (void)_setNullResettableValue:(id)a0 forKey:(id)a1;
- (BOOL)validateModificationDate:(id *)a0 error:(id *)a1;
- (void)_deriveValuesFromProvidedInfo:(id)a0;
- (void)_updateDerivedSubscriptionInfo;
- (BOOL)_validateNullableValue:(id *)a0 forKey:(id)a1 error:(id *)a2;
- (void)setBillingIdentifier:(id)a0;
- (void)setMostRecentSaveDate:(id)a0;
- (void)setProvidedSubscriptionInfo:(id)a0;
- (void)setSubscriberIdentifierHash:(id)a0;
- (void)setTierIdentifiers:(id)a0;
- (BOOL)validateAccessLevel:(id *)a0 error:(id *)a1;
- (BOOL)validateBillingIdentifier:(id *)a0 error:(id *)a1;
- (BOOL)validateCreationDate:(id *)a0 error:(id *)a1;
- (BOOL)validateExpirationDate:(id *)a0 error:(id *)a1;
- (BOOL)validateSubscriberIdentifierHash:(id *)a0 error:(id *)a1;
- (BOOL)validateTierIdentifiers:(id *)a0 error:(id *)a1;

@end
