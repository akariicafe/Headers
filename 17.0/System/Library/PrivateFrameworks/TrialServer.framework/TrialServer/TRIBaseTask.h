@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding;

@interface TRIBaseTask : NSObject

@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (retain, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;

- (unsigned long long)requiredCapabilities;
- (unsigned long long)hash;
- (void)runDequeueHandlerUsingContext:(id)a0;
- (id)description;
- (void)runEnqueueHandlerUsingContext:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
