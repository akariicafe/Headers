@class NSArray, NSDictionary, NSMutableDictionary;

@interface CKDFetchMergeableDeltaMetadataURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *mergeableValueIDs;
@property (retain, nonatomic) NSDictionary *continuationTokens;
@property (retain, nonatomic) NSMutableDictionary *mergeableValueIDByRequestID;
@property (copy, nonatomic) id /* block */ metadataFetchedBlock;

- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)zoneIDsToLock;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void).cxx_destruct;
- (int)isolationLevel;
- (id)anonymousUserIDForHTTPHeader;
- (id)initWithOperation:(id)a0 mergeableValueIDs:(id)a1 continuationTokens:(id)a2;

@end
