@class NSArray, NSMutableArray, NSMutableDictionary;
@protocol CKRepairZonePCSOperationCallbacks;

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation

@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) NSArray *zoneIDs;
@property (retain, nonatomic) NSMutableArray *fetchedZones;
@property (retain, nonatomic) NSMutableArray *fixedZones;
@property (retain, nonatomic) NSMutableDictionary *pcsInfoByZoneID;
@property (retain, nonatomic) id<CKRepairZonePCSOperationCallbacks> clientOperationCallbackProxy;
@property (copy, nonatomic) id /* block */ zonePCSRepairProgressBlock;

+ (id)nameForState:(unsigned long long)a0;

- (BOOL)makeStateTransition;
- (void)_finishOnCallbackQueueWithError:(id)a0;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (id)activityCreate;
- (void)main;
- (void).cxx_destruct;
- (id)_checkPCSDataForZone:(id)a0;
- (void)_checkZonePCS;
- (void)_fetchZones;
- (void)_uploadRepairedZones;

@end
