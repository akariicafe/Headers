@class NSMutableDictionary, NSDate;

@interface LBFBucket : NSObject

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (nonatomic) unsigned long long bucketIndex;
@property (retain, nonatomic) NSMutableDictionary *eventTree;

- (void).cxx_destruct;
- (id)flattenEvents;
- (id)initWithInterval:(id)a0 endTimestamp:(id)a1 index:(unsigned long long)a2;

@end
