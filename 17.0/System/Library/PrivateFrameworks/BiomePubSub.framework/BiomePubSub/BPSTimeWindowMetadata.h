@class NSDateInterval;

@interface BPSTimeWindowMetadata : NSObject <BPSWindowMetadata>

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (id)new;

- (id)init;
- (id)initWithDateInterval:(id)a0;
- (void).cxx_destruct;

@end
