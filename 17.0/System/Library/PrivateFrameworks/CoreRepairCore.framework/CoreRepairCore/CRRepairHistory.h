@class NSDictionary;

@interface CRRepairHistory : NSObject {
    NSDictionary *repairHistoryMap;
}

- (id)init;
- (void).cxx_destruct;
- (id)CAABasedRepairDateForComponent:(id)a0 withHistory:(id)a1;
- (id)RCHLBasedRepairDateForComponent:(id)a0 withHistory:(id)a1;
- (id)extractRCHLRepairHistory;
- (id)extractRepairsAfterACRZWithHistory:(id)a0;
- (BOOL)hasHadRCHLBasedRepairForComponent:(id)a0 withHistory:(id)a1;
- (BOOL)isRCHLRepairHistoryDevice;
- (id)repairDateForComponent:(id)a0 withRCHLHistory:(id)a1 withCAAHistory:(id)a2;

@end
