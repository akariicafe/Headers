@interface HMDTransactionArchiveReplayLogEvent : HMDLaunchTimingEvent

@property (readonly) long long numUncommittedRecords;
@property (readonly) long long numUncommittedAndPushedRecords;

- (id)initWithNumUncommittedRecords:(long long)a0 numUncommittedAndPushedRecords:(long long)a1;

@end
