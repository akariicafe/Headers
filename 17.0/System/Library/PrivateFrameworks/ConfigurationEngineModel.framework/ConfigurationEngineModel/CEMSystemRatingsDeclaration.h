@class NSSet, NSString, NSNumber;

@interface CEMSystemRatingsDeclaration : CEMConfigurationBase <CEMRegisteredTypeProtocol>

@property (class, readonly, copy) NSSet *allowedPayloadKeys;
@property (class, readonly, copy) NSString *registeredClassName;
@property (class, readonly, copy) NSString *registeredIdentifier;

@property (copy, nonatomic) NSString *payloadRatingRegion;
@property (copy, nonatomic) NSNumber *payloadRatingApps;
@property (copy, nonatomic) NSNumber *payloadRatingMovies;
@property (copy, nonatomic) NSNumber *payloadRatingTVShows;
@property (copy, nonatomic) NSNumber *payloadAllowExplicitContent;
@property (copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedTV;
@property (copy, nonatomic) NSNumber *payloadAllowShowingUndownloadedMovies;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)profileType;
+ (id)buildRequiredOnlyWithIdentifier:(id)a0;
+ (id)buildWithIdentifier:(id)a0 withRatingRegion:(id)a1 withRatingApps:(id)a2 withRatingMovies:(id)a3 withRatingTVShows:(id)a4 withAllowExplicitContent:(id)a5 withAllowShowingUndownloadedTV:(id)a6 withAllowShowingUndownloadedMovies:(id)a7;
+ (id)restrictionPayloadKeys;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)activationLevel;
- (id)assetReferences;
- (BOOL)multipleAllowed;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (BOOL)mustBeSupervised;
- (id)serializePayloadWithAssetProviders:(id)a0;

@end
