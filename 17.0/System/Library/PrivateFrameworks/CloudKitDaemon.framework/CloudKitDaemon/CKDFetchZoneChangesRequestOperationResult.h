@class NSData, NSSet;

@interface CKDFetchZoneChangesRequestOperationResult : NSObject

@property (retain, nonatomic) NSData *resultServerChangeTokenData;
@property (retain, nonatomic) NSData *resultClientChangeTokenData;
@property (nonatomic) long long status;
@property (nonatomic) BOOL hasPendingArchivedRecords;
@property (retain, nonatomic) NSSet *syncObligationZoneIDs;

- (id)init;
- (void).cxx_destruct;

@end
