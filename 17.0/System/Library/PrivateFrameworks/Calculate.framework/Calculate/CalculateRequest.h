@class NSString, NSDictionary, CalculateResult;

@interface CalculateRequest : NSObject

@property (retain, nonatomic) NSString *expression;
@property (retain, nonatomic) NSDictionary *options;
@property (retain, nonatomic) CalculateResult *result;
@property (nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ resultHandler;

+ (id)serialQueue;
+ (void)_unlock;
+ (void)_lock;

- (void)finish;
- (void)update;
- (void).cxx_destruct;
- (void)cancel;

@end
