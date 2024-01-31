@class NSObject, MTEnvironment, MTEventRecorder;
@protocol OS_dispatch_queue, MTEventFilter;

@interface MTSystem : MTObject

@property (retain, nonatomic) MTEnvironment *environment;
@property (retain, nonatomic) MTEventRecorder *eventRecorder;
@property (retain, nonatomic) id<MTEventFilter> eventFilter;
@property (retain, nonatomic) id<MTEventFilter> treatmentFilter;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)initWithMetricsKit:(id)a0;
- (void)setEventFilterWithJavaScriptFunction:(id)a0 context:(id)a1 operationQueue:(id)a2;

@end
