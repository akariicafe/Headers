@class NSDate;

@interface PHAWorkerHealthScoreEntry : NSObject

@property (readonly, nonatomic) float score;
@property (readonly, copy, nonatomic) NSDate *dateRecorded;

- (id)initWithScore:(float)a0;
- (void).cxx_destruct;

@end
