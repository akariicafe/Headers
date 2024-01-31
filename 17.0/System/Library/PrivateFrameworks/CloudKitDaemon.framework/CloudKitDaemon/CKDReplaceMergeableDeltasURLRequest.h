@class NSArray, NSMutableDictionary;

@interface CKDReplaceMergeableDeltasURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *replaceDeltasRequests;
@property (retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID;
@property (nonatomic) BOOL ignoreMissingDeltas;
@property (copy, nonatomic) id /* block */ perReplacementCompletionBlock;

+ (id)requestOperationsForRequest:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2 error:(id *)a3;

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
- (id)initWithOperation:(id)a0 replaceDeltasRequests:(id)a1 ignoreMissingDeltas:(BOOL)a2;

@end
