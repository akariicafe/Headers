@class SAUserTokenStatus, NSArray, NSString, SAUserState, SACalendar, NSNumber;

@interface SADynamiteClientState : SAAceClientState <SABackgroundContextObject>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL activeTvUser;
@property (nonatomic) BOOL ageVerificationRequired;
@property (retain, nonatomic) SAUserState *defaultUserState;
@property (copy, nonatomic) NSArray *eligibleOffers;
@property (retain, nonatomic) SACalendar *expirationDate;
@property (copy, nonatomic) NSNumber *iCloudMusicLibraryToggle;
@property (copy, nonatomic) NSString *iTunesMatchSubscriptionStatus;
@property (copy, nonatomic) NSArray *inContextUsersStates;
@property (nonatomic) BOOL isPromotionRelatedStatus;
@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSNumber *userHistoryUnmodifiable;
@property (copy, nonatomic) NSString *userToken;
@property (retain, nonatomic) SAUserTokenStatus *userTokenStatus;
@property (copy, nonatomic) NSString *xpAbCookie;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)syncKey;
+ (id)deliveryDeadline;
+ (id)dynamiteClientState;
+ (id)dynamiteClientStateWithDictionary:(id)a0 context:(id)a1;
+ (id)persistencePolicy;
+ (id)uniqueObjectIdentifier;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
