@class NSObject;
@protocol OS_dispatch_queue;

@interface HAENStatistics : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)processMessage:(id)a0;
- (void).cxx_destruct;
- (void)_sendMessage:(id)a0;
- (void)processStatsForEvent:(id)a0;
- (void)processStatsForLocationGating:(struct { id x0; id x1; id x2; BOOL x3; BOOL x4; })a0;
- (id)volumeActionString:(unsigned int)a0;

@end
