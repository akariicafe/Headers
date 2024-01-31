@class NSString, NSArray, NSSet, NSData, CKRecordZoneID, NSMutableArray, CKQuery;

@interface CKDQueryURLRequest : CKDURLRequest <CKDURLRequestPipelining>

@property (retain, nonatomic) NSMutableArray *queryResponses;
@property (retain, nonatomic) NSData *resultsCursor;
@property (retain, nonatomic) NSMutableArray *recordResponses;
@property (retain, nonatomic) CKQuery *query;
@property (retain, nonatomic) NSData *cursor;
@property (nonatomic) unsigned long long limit;
@property (retain, nonatomic) CKRecordZoneID *zoneID;
@property (retain, nonatomic) NSArray *requestedFields;
@property (nonatomic) BOOL shouldFetchAssetContent;
@property (retain, nonatomic) NSSet *desiredAssetKeys;
@property (copy, nonatomic) id /* block */ recordsParsedBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)zoneIDsToLock;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (BOOL)allowsAnonymousAccount;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (void)requestDidComplete;
- (id)initWithOperation:(id)a0 query:(id)a1 cursor:(id)a2 limit:(unsigned long long)a3 requestedFields:(id)a4 zoneID:(id)a5;
- (BOOL)handlesAnonymousCKUserIDPropagation;
- (void).cxx_destruct;
- (BOOL)requestGETPreAuth;

@end
