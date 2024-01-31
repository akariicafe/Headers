@class NSMutableDictionary, MPMutableSectionedCollection, MPCModelStorePlaybackItemsRequest, MPCModelStorePlaybackItemsRequestAccumulation, NSDictionary, ICURLAggregatedPerformanceMetrics, NSMutableArray, NSString, NSMutableOrderedSet, MPLibraryObjectDatabase, MPPropertySet, NSHashTable, MPServerObjectDatabase, NSError;
@protocol MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider;

@interface MPCModelStorePlaybackItemsRequestAccumulator2 : NSObject {
    MPCModelStorePlaybackItemsRequest *_request;
    MPServerObjectDatabase *_sod;
    MPLibraryObjectDatabase *_lod;
    NSString *_personID;
    MPPropertySet *_requestPropertySet;
    NSMutableArray *_importResults;
    BOOL _allowsExplicitContent;
    long long _defaultLibraryPersonalizationStyle;
    long long _unknownEndpointLibraryPersonalizationStyle;
    NSMutableOrderedSet *_pendingStoreIDs;
    NSMutableDictionary *_sectionIndexToCollectionItemMetadataRequestMap;
    NSMutableDictionary *_sectionIndexToCollectionItemAuthTokenRequestMap;
    NSMutableDictionary *_sectionIndexToTokenRenewalRequestMap;
    NSMutableDictionary *_storeIDToCollectionMetadataRequestMap;
    NSMutableArray *_pendingCollectionMetadataRequests;
    NSMutableArray *_pendingCollectionItemMetadataRequests;
    NSMutableArray *_pendingCollectionItemTokenRenewalRequests;
    NSMutableArray *_pendingCollectionItemAuthorizationTokenRequests;
    id<MPServerObjectDatabasePlaybackAuthorizationTokenTrustProvider> _trustProvider;
    MPMutableSectionedCollection *_progressiveContentDescriptors;
    NSHashTable *_failedIdentifiers;
    ICURLAggregatedPerformanceMetrics *_performanceMetrics;
}

@property (readonly, copy, nonatomic) NSMutableDictionary *equivalencyMapping;
@property (readonly, nonatomic) MPCModelStorePlaybackItemsRequestAccumulation *accumulatedResults;
@property (readonly, nonatomic) NSError *accumulationError;
@property (readonly, nonatomic) struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; } accumulatorResult;
@property (readonly, nonatomic) ICURLAggregatedPerformanceMetrics *performanceMetrics;
@property (readonly, copy, nonatomic) NSDictionary *abc_stateDump;

- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (struct MPCModelStorePlaybackItemsRequestAccumulatorResult { BOOL x0; BOOL x1; BOOL x2; BOOL x3; })handleResponse:(id)a0 error:(id)a1;
- (void)_addEquivalencyForMetadata:(id)a0 requestStoreIdentifier:(id)a1;
- (void)_addPendingChildItem:(id)a0 identifiers:(id)a1 atSectionIndex:(id)a2 collectionPlaybackAuthorizationToken:(id)a3 requestType:(long long)a4;
- (id)_identifiersForTokens:(id)a0;
- (BOOL)_isFatalError:(id)a0;
- (void)_resolveContentDescriptorsUsingObjectDatabases;
- (id)_tokenFromLookupIdentifiers:(id)a0 propertySet:(id)a1 indexPath:(id)a2 error:(id *)a3;
- (id)_userIdentityWithRequest:(id)a0;
- (id)handleMediaAPIResponse:(id)a0 trustID:(id)a1 isFinalResponse:(BOOL)a2;
- (id)initWithRequest:(id)a0 serverObjectDatabase:(id)a1;
- (id)newMediaAPICollectionItemMetadataRequestInfo;
- (id)newStoreItemMetadataRequest;

@end
