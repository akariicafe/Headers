@interface PMLTrainingLogEntry : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) unsigned long long serverIteration;

- (id)initWithTimestamp:(double)a0 serverIteration:(unsigned long long)a1;

@end
