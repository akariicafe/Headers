@class NSArray, NSString, NSMutableDictionary;

@interface CKDFetchRecordVersionsRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *recordIDs;
@property (retain, nonatomic) NSArray *desiredKeys;
@property (retain, nonatomic) NSString *minimumVersionETag;
@property (retain, nonatomic) NSMutableDictionary *recordIDByRequestID;
@property (nonatomic) BOOL isDeleted;
@property (copy, nonatomic) id /* block */ recordVersionsFetchedBlock;
@property (nonatomic) BOOL shouldFetchAssetContent;

- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (id)zoneIDsToLock;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 recordIDs:(id)a1 desiredKeys:(id)a2 minimumVersionETag:(id)a3;

@end
