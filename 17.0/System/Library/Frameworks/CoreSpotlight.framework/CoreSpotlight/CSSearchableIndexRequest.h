@class NSString, CSSearchableIndex, CSDataWrapper, NSData;

@interface CSSearchableIndexRequest : NSObject

@property (retain, nonatomic) CSSearchableIndex *index;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CSDataWrapper *dataWrapper;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) _Atomic unsigned int requestID;
@property (nonatomic) BOOL started;
@property (nonatomic) BOOL finished;
@property (nonatomic) BOOL throttled;
@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) BOOL shouldThrottle;
@property (readonly, nonatomic) NSData *data;
@property (copy, nonatomic) id /* block */ performBlock;
@property (copy, nonatomic) id /* block */ completionDataBlock;
@property (copy, nonatomic) id /* block */ completionBlock;

+ (void)initialize;

- (void)dealloc;
- (void)_unthrottleIfNecessary;
- (void)start;
- (void)retryIfNecessaryWithError:(id)a0;
- (void)_perform;
- (id)initWithSearchableIndex:(id)a0 label:(id)a1;
- (id)description;
- (void)_throttleIfNecessary;
- (void).cxx_destruct;
- (void)finishWithError:(id)a0;
- (void)retryIfNecessaryWithError:(id)a0 dataWrapper:(id)a1;
- (void)_finishWithError:(id)a0;

@end
