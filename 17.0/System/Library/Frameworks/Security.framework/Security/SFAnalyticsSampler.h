@class NSString, NSObject;
@protocol OS_dispatch_source;

@interface SFAnalyticsSampler : NSObject {
    NSObject<OS_dispatch_source> *_timer;
    id /* block */ _block;
    int _notificationToken;
    Class _clientClass;
    BOOL _activeTimer;
}

@property (nonatomic) double samplingInterval;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL oncePerReport;

- (void)resumeSampling;
- (void)dealloc;
- (id)sampleNow;
- (void)setupPeriodicTimer;
- (void)setupOnceTimer;
- (void).cxx_destruct;
- (id)initWithName:(id)a0 interval:(double)a1 block:(id /* block */)a2 clientClass:(Class)a3;
- (void)newTimer;
- (void)pauseSampling;

@end
