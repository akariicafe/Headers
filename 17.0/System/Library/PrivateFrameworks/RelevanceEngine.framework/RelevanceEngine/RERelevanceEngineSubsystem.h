@class RERelevanceEngine, NSString, REActivityTracker, NSObject;
@protocol OS_dispatch_queue;

@interface RERelevanceEngineSubsystem : NSObject <RERelevanceEngineSubsystemProperties, REActivityTrackerDelegate> {
    NSObject<OS_dispatch_queue> *_relevanceEngineQueue;
    REActivityTracker *_activityTracker;
    BOOL _running;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) RERelevanceEngine *relevanceEngine;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic, getter=isRunning) BOOL running;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)pause;
- (void)dealloc;
- (void)setRunning:(BOOL)a0;
- (void)resume;
- (void).cxx_destruct;
- (id)initWithRelevanceEngine:(id)a0;
- (void)withdrawObject:(id)a0;
- (void)activityTracker:(id)a0 didEndActivity:(id)a1;
- (void)activityTracker:(id)a0 didBeginActivity:(id)a1;
- (void)beginActivity:(id)a0 forObject:(id)a1;
- (void)endActivity:(id)a0 forObject:(id)a1;
- (void)trackObject:(id)a0;

@end
