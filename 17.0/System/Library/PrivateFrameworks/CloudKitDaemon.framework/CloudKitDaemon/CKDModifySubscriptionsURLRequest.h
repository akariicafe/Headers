@class NSArray, NSMutableDictionary, CKRecordZoneID;

@interface CKDModifySubscriptionsURLRequest : CKDURLRequest

@property (retain, nonatomic) NSArray *subscriptionsToSave;
@property (retain, nonatomic) NSArray *subscriptionIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary *subscriptionIDByRequestID;
@property (copy, nonatomic) CKRecordZoneID *zoneID;
@property (copy, nonatomic) id /* block */ subscriptionModifiedBlock;

- (void)fillOutRequestProperties:(id)a0;
- (void)fillOutEquivalencyPropertiesBuilder:(id)a0;
- (BOOL)requiresCKAnonymousUserIDs;
- (id)requestDidParseProtobufObject:(id)a0;
- (id)requestOperationClasses;
- (void)requestDidParseNodeFailure:(id)a0;
- (id)generateRequestOperations;
- (void).cxx_destruct;
- (id)initWithOperation:(id)a0 subscriptionsToSave:(id)a1 subscriptionIDsToDelete:(id)a2;

@end
