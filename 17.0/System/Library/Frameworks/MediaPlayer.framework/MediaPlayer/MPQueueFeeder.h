@class NSString, NSDictionary, NSData, MPQueueFeederIdentifierRegistry;

@interface MPQueueFeeder : NSObject {
    MPQueueFeederIdentifierRegistry *_identifierRegistry;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _identifierRegistryLock;
}

@property (copy, nonatomic) NSString *playActivityQueueGroupingID;
@property (copy, nonatomic) NSString *playActivityFeatureName;
@property (copy, nonatomic) NSData *playActivityRecommendationData;
@property (copy, nonatomic) NSString *siriReferenceIdentifier;
@property (copy, nonatomic) NSDictionary *siriWHAMetricsInfo;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

- (id)init;
- (id)errorResolverForItem:(id)a0;
- (void).cxx_destruct;
- (void)applyVolumeNormalizationForItem:(id)a0;
- (id)firstModelPlayEvent;
- (void)getRepresentativeMetadataForPlaybackContext:(id)a0 properties:(id)a1 completion:(id /* block */)a2;
- (void)identifierRegistryWithExclusiveAccess:(id /* block */)a0;
- (BOOL)identifierRegistryWithExclusiveAccessReturningBOOL:(id /* block */)a0;
- (long long)identifierRegistryWithExclusiveAccessReturningInteger:(id /* block */)a0;
- (id)identifierRegistryWithExclusiveAccessReturningObject:(id /* block */)a0;
- (void)replaceIdentifierRegistry:(id)a0;
- (long long)supplementalPlaybackContextBehavior;
- (id)supplementalPlaybackContextWithReason:(long long)a0;

@end
