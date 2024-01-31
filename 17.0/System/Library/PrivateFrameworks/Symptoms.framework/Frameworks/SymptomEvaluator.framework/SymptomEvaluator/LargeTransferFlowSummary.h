@class FlowLedger;

@interface LargeTransferFlowSummary : NSObject

@property (nonatomic) double lastSeenAt;
@property (nonatomic) double stateEntryTimestamp;
@property (nonatomic) unsigned int state;
@property (retain, nonatomic) FlowLedger *ledger;

- (void).cxx_destruct;

@end
