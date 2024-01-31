@class INDateComponentsRange, NSString, CLPlacemark, INPaymentMethod, INSpeakableString, NSNumber;

@interface INRequestRideIntent : INIntent <INRequestRideIntentExport>

@property (readonly, copy, nonatomic) CLPlacemark *pickupLocation;
@property (readonly, copy, nonatomic) CLPlacemark *dropOffLocation;
@property (readonly, copy, nonatomic) INSpeakableString *rideOptionName;
@property (readonly, copy, nonatomic) NSNumber *partySize;
@property (readonly, copy, nonatomic) INPaymentMethod *paymentMethod;
@property (readonly, copy, nonatomic) INDateComponentsRange *scheduledPickupTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (id)_dictionaryRepresentation;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (id)_categoryVerb;
- (BOOL)_isUserConfirmationRequired;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_typedBackingStore;
- (id)initWithPickupLocation:(id)a0 dropOffLocation:(id)a1 rideOptionName:(id)a2 partySize:(id)a3 paymentMethod:(id)a4;
- (id)initWithPickupLocation:(id)a0 dropOffLocation:(id)a1 rideOptionName:(id)a2 partySize:(id)a3 paymentMethod:(id)a4 scheduledPickupTime:(id)a5;
- (id)parametersByName;
- (void)setDropOffLocation:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPartySize:(id)a0;
- (void)setPaymentMethod:(id)a0;
- (void)setPickupLocation:(id)a0;
- (void)setRideOptionName:(id)a0;
- (void)setScheduledPickupTime:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
