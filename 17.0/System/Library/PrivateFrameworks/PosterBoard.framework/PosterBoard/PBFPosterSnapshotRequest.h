@class NSString, NSArray, PRPosterConfiguredProperties, PRSServerPosterPath;
@protocol PBFDisplayContext;

@interface PBFPosterSnapshotRequest : NSObject <NSCopying> {
    unsigned long long _cachedHash;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *previewIdentifier;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic) PRSServerPosterPath *path;
@property (readonly, nonatomic) BOOL loadFromCacheIfAvailable;
@property (readonly, nonatomic) PRPosterConfiguredProperties *configuredProperties;
@property (readonly, nonatomic) id<PBFDisplayContext> displayContext;
@property (readonly, nonatomic) NSArray *definitions;
@property (readonly, nonatomic) unsigned long long intention;
@property (readonly, nonatomic) unsigned long long significantEventsCounter;
@property (readonly, nonatomic) long long powerLogReason;

+ (BOOL)isRequestFulfilled:(id)a0 modelCoordinatorProvider:(id)a1;
+ (id)snapshotRequestForConfiguration:(id)a0 context:(id)a1;
+ (id)snapshotRequestForPreview:(id)a0 context:(id)a1 definition:(id)a2;
+ (id)snapshotRequestForConfiguration:(id)a0 withinSwitcherConfiguration:(id)a1 variant:(long long)a2 snapshotDefinitions:(id)a3 displayContext:(id)a4;
+ (id)snapshotRequestForPreview:(id)a0 context:(id)a1;
+ (BOOL)areRequestsFulfilled:(id)a0 modelCoordinatorProvider:(id /* block */)a1;

- (BOOL)isEqualToRequest:(id)a0;
- (id)initWithConfiguration:(id)a0 definitions:(id)a1 context:(id)a2;
- (unsigned long long)hash;
- (id)requestWithPreviewIdentifier:(id)a0;
- (BOOL)_isEqualToRequest:(id)a0 allowingOtherDefinitionsAreSubset:(BOOL)a1;
- (id)requestWithDefinitions:(id)a0;
- (id)requestWithIntention:(unsigned long long)a0;
- (id)requestWithSignificantEventsCounter:(unsigned long long)a0;
- (id)description;
- (id)initWithPath:(id)a0 provider:(id)a1 configuredProperties:(id)a2 definitions:(id)a3 context:(id)a4;
- (id)requestWithPowerLogReason:(long long)a0;
- (void).cxx_destruct;
- (BOOL)containsRequest:(id)a0;
- (id)initWithDescriptor:(id)a0 configuredProperties:(id)a1 definitions:(id)a2 context:(id)a3;
- (id)requestWithLoadFromCacheIfAvailable:(BOOL)a0;
- (id)requestWithDisplayContext:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)snapshotURLForDefinition:(id)a0;

@end
