@class NSObject, NSMutableDictionary, AudioTier;
@protocol OS_dispatch_queue;

@interface AudioTierHistogram : NSObject {
    NSMutableDictionary *histogram;
    AudioTier *currentTier;
    double startTime;
    NSObject<OS_dispatch_queue> *awdAudioTierQueue;
}

- (id)init;
- (void)dealloc;
- (void)end;
- (void)accumulateTime:(double)a0 forAudioTier:(id)a1;
- (void)newAudioTier:(unsigned int)a0 duplication:(unsigned int)a1 bundling:(unsigned int)a2 codecPayload:(unsigned int)a3 codecBitrate:(unsigned int)a4 mode:(unsigned int)a5;
- (id)newReport;

@end
