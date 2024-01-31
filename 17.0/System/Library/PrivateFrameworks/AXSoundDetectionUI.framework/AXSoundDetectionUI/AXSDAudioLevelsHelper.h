@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface AXSDAudioLevelsHelper : NSObject {
    NSMutableDictionary *_listenerHanders;
    NSMutableDictionary *_listenerBucketCounts;
    NSObject<OS_dispatch_queue> *_listenerQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)deregisterListener:(id)a0;
- (void).cxx_destruct;
- (void)registerListener:(id)a0 forAudioLevelUpdates:(id /* block */)a1 withBucketCount:(int)a2;
- (void)updateListenersWithBuffer:(id)a0;

@end
