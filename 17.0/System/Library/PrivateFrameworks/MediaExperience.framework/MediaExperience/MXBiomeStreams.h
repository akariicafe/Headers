@class NSObject;
@protocol OS_dispatch_queue;

@interface MXBiomeStreams : NSObject {
    NSObject<OS_dispatch_queue> *mAccessQueue;
}

+ (id)sharedInstance;

- (id)init;
- (void)dealloc;
- (void)updateBiomeSilentMode:(BOOL)a0 clientType:(unsigned int)a1 untilTime:(id)a2 reason:(id)a3;

@end
