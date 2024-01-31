@class NSMutableDictionary;

@interface TRIAggregateFetchRecordsProgressGuardedData : NSObject {
    NSMutableDictionary *perCKRecordProgress;
    NSMutableDictionary *perMARecordProgress;
    unsigned long long expectedTotalBytes;
    unsigned long long actualBytesTransferred;
}

- (void).cxx_destruct;

@end
