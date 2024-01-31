@class HMMDateProvider, NSString, NSDate;

@interface HMMDailyPartitionProvider : NSObject <HMMCounterDatePartitionProvider>

@property (readonly, nonatomic) HMMDateProvider *dateProvider;
@property (readonly, copy, nonatomic) NSDate *currentDatePartition;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithDateProvider:(id)a0;
- (id)datePartitionWithOffsetFromNow:(long long)a0;

@end
