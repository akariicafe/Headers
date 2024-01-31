@class NSMutableArray;

@interface CSAttSiriGazeQueue : NSObject

@property (retain, nonatomic) NSMutableArray *data;

- (id)init;
- (id)dequeue;
- (void)enqueue:(double)a0;
- (void).cxx_destruct;
- (id)valueAt:(unsigned long long)a0;

@end
