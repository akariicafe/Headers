@class _ICQFollowupSpecification, _ICQAlertSpecification, NSDictionary, NSString;

@interface ICQDaemonOffer : ICQDaemonPersisted

@property (readonly, nonatomic) _ICQAlertSpecification *alertSpecification;
@property (readonly, nonatomic) _ICQFollowupSpecification *followupSpecification;
@property (readonly, nonatomic) NSDictionary *lockScreenInfo;
@property (retain, nonatomic) _ICQAlertSpecification *internalAlertSpecification;
@property (retain, nonatomic) _ICQFollowupSpecification *internalFollowupSpecification;
@property (readonly, nonatomic) long long level;
@property (readonly, nonatomic, getter=isBuddyOffer) BOOL buddyOffer;
@property (readonly, nonatomic, getter=isDefaultOffer) BOOL defaultOffer;
@property (readonly, nonatomic, getter=isPremiumOffer) BOOL premiumOffer;
@property (retain, nonatomic) NSString *notificationID;
@property (copy, nonatomic) NSString *offerId;

+ (id)persistenceKey;
+ (id)stringWithPlaceholderFormat:(id)a0 alternateString:(id)a1;
+ (id)defaultPlaceholderKeys;
+ (BOOL)placeholderExistsInString:(id)a0;
+ (id)placeholderKeysInString:(id)a0 fromKeys:(id)a1;
+ (id)stringWithPlaceholderFormat:(id)a0;
+ (id)stringWithPlaceholderFormat:(id)a0 substitutions:(id)a1;
+ (id)substitutionForPlaceholderKey:(id)a0 outIsBelowMin:(BOOL *)a1;
+ (id)substitutionsForPlaceholderKeys:(id)a0;
+ (id)substitutionsForPlaceholderKeys:(id)a0 checkIfBelowMin:(BOOL)a1 outIsMissingSubstitution:(BOOL *)a2;

- (id)_initWithAccount:(id)a0 error:(id)a1;
- (void)_addSampleAlert;
- (id)initWithDictionary:(id)a0;
- (void)setServerDictionary:(id)a0;
- (id)_mutablePersistenceDictionary;
- (void)_initSubclassFromServerDictionary;
- (void).cxx_destruct;
- (id)alertSpecificationForAlertKey:(id)a0;
- (id)_initWithAccount:(id)a0 serverDictionary:(id)a1;

@end
