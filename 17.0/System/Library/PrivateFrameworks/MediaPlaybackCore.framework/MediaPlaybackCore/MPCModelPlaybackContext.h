@class NSString, MPModelRequest, MPCPlaybackRequestEnvironment, MPIdentifierSet, NSDictionary, MPModelGenericObject;

@interface MPCModelPlaybackContext : MPPlaybackContext <MPCModelPlaybackRequestEnvironmentConsuming>

@property (readonly, copy, nonatomic) NSString *encodedMediaLibraryUniqueID;
@property (copy, nonatomic) MPCPlaybackRequestEnvironment *playbackRequestEnvironment;
@property (nonatomic) BOOL skipEncodingMediaLibraryUniqueID;
@property (nonatomic) BOOL allowsJumpToIt;
@property (copy, nonatomic) MPModelRequest *request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers;
@property (copy, nonatomic) NSDictionary *startTimeModifications;
@property (copy, nonatomic) NSDictionary *endTimeModifications;
@property (copy, nonatomic) NSDictionary *assetStoreFronts;
@property (copy, nonatomic) MPModelGenericObject *fallbackSectionRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (Class)queueFeederClass;
+ (BOOL)supportsAutoPlay;

- (void)setUserIdentity:(id)a0;
- (id)init;
- (id)userIdentity;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isSupported;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)clearStartItem;
- (BOOL)containsRestorableContent;
- (id)descriptionComponents;
- (BOOL)isReusableForPlaybackContext:(id)a0;
- (void)getRemotePlaybackQueueRepresentationWithCompletion:(id /* block */)a0;
- (id)getSharedListeningTracklistWithCompletion:(id /* block */)a0;
- (void)updateRequestPlaybackEnvironment;

@end
