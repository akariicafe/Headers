@class NSString, NSMutableDictionary, NSArray;

@interface PAAccessRecordCoalescingWindowRolledOverState : NSObject <PAAccessRecordCoalescingWindowState> {
    NSArray *_groupedRecordsToRepublish;
    BOOL _reversed;
}

@property (readonly, nonatomic) long long epoch;
@property (readonly, nonatomic) NSMutableDictionary *groupedRecordsByMatcher;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initByEndingPreviousWindow:(id)a0 reversed:(BOOL)a1 withInitialAccessRecord:(id)a2 forNewEpoch:(long long)a3;
- (id)recordsToRepublish;

@end
