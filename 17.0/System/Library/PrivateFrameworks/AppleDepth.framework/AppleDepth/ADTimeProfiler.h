@class NSMutableArray;

@interface ADTimeProfiler : NSObject

@property (retain, nonatomic) NSMutableArray *logArray;

+ (unsigned long long)currentTimeUsec;

- (void)stop:(id)a0;
- (id)init;
- (void)reset;
- (id)log;
- (void)start:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)printLog;
- (void)startForOperationWithName:(id)a0;
- (void)startWithUTFString:(const char *)a0;
- (void)stopForOperationWithName:(id)a0;
- (void)stopWithUTFString:(const char *)a0;
- (id)stringLog;
- (id)valueDictForOperationName:(id)a0;

@end
