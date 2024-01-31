@class NSString, NSArray, NSDate;
@protocol TRITaskQueueStateProviding, TRITaskAttributing;

@interface TRIRecurrentScheduleFetchRollbacksTask : TRIBaseTask <TRITask> {
    id<TRITaskAttributing> _taskAttribution;
    BOOL _isRepeatedInstance;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int taskType;
@property (readonly, nonatomic) NSString *taskName;
@property (readonly, nonatomic) NSArray *tags;
@property (copy, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSArray *dependencies;
@property (weak, nonatomic) id<TRITaskQueueStateProviding> stateProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseFromData:(id)a0;
+ (id)taskWithAttribution:(id)a0;

@end
