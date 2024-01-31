@class NSString, CMActivityManager, MNTraceRecorder;
@protocol GEOMotionContextProviderDelegate;

@interface MNCoreMotionContextProvider : NSObject <GEOMotionContextProvider> {
    CMActivityManager *_activityManager;
    MNTraceRecorder *_traceRecorder;
}

@property (weak, nonatomic) id<GEOMotionContextProviderDelegate> motionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)startMotionUpdates;
- (void)stopMotionUpdates;
- (id)initWithTraceRecorder:(id)a0;

@end
