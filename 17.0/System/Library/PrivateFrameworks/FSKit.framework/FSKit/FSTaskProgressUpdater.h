@class NSProgress, NSObject;
@protocol OS_dispatch_source;

@interface FSTaskProgressUpdater : NSObject

@property (retain) NSProgress *childProgress;
@property (retain) NSObject<OS_dispatch_source> *timerSource;
@property (retain) NSProgress *parentProgress;

+ (id)newWithProgress:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProgress:(id)a0;
- (void)endPhase:(id)a0;
- (id)startPhase:(id)a0 parentUnitCount:(long long)a1 phaseTotalCount:(long long)a2 completedCounter:(const unsigned int *)a3;

@end
