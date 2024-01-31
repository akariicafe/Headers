@class NSDate, NSArray, NSString, INPrivatePlayMediaIntentData, INMediaSearch, NSNumber, INMediaItem;

@interface INPlayMediaIntent : INIntent <INPlayMediaIntentExport>

@property (readonly, copy, nonatomic) NSArray *mediaItems;
@property (readonly, copy, nonatomic) INMediaItem *mediaContainer;
@property (readonly, copy, nonatomic) NSNumber *playShuffled;
@property (readonly, nonatomic) long long playbackRepeatMode;
@property (readonly, copy, nonatomic) NSNumber *resumePlayback;
@property (readonly, nonatomic) long long playbackQueueLocation;
@property (readonly, copy, nonatomic) NSNumber *playbackSpeed;
@property (readonly, copy, nonatomic) INMediaSearch *mediaSearch;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSArray *buckets;
@property (copy, nonatomic) NSString *recoID;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (copy, nonatomic) NSArray *alternativeResults;
@property (nonatomic) long long parsecCategory;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (copy, nonatomic) INPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_ignoredParameters;

- (long long)_compareSubProducerOne:(id)a0 subProducerTwo:(id)a1;
- (id)_dictionaryRepresentation;
- (id)_spotlightContentType;
- (id)domain;
- (void)setDomain:(id)a0;
- (void)_setMetadata:(id)a0;
- (id)_metadata;
- (long long)_intentCategory;
- (void)setMediaSearch:(id)a0;
- (id)_categoryVerb;
- (id)_intents_backgroundHandlingAssertionForBundleIdentifier:(id)a0 context:(unsigned long long)a1 error:(id *)a2;
- (BOOL)_intents_isExemptFromMulitWindowRequirementForInAppHandling;
- (struct { double x0; double x1; })_intents_preferredScaledImageSize;
- (id)_keyCodableAttributes;
- (void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)a0 containingAppBundleId:(id)a1;
- (id)_titleWithLocalizer:(id)a0 fromBundleURL:(id)a1;
- (id)_typedBackingStore;
- (id)_validParameterCombinationsWithSchema:(id)a0;
- (id)initWithMediaItems:(id)a0 mediaContainer:(id)a1 playShuffled:(id)a2 playbackRepeatMode:(long long)a3 resumePlayback:(id)a4;
- (id)initWithMediaItems:(id)a0 mediaContainer:(id)a1 playShuffled:(id)a2 playbackRepeatMode:(long long)a3 resumePlayback:(id)a4 playbackQueueLocation:(long long)a5 playbackSpeed:(id)a6 mediaSearch:(id)a7;
- (id)parametersByName;
- (void)setMediaContainer:(id)a0;
- (void)setMediaItems:(id)a0;
- (void)setParametersByName:(id)a0;
- (void)setPlayShuffled:(id)a0;
- (void)setPlaybackQueueLocation:(long long)a0;
- (void)setPlaybackRepeatMode:(long long)a0;
- (void)setPlaybackSpeed:(id)a0;
- (void)setResumePlayback:(id)a0;
- (void)setVerb:(id)a0;
- (id)verb;

@end
