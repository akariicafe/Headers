@class NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCRateSharingGroup : VCObject {
    NSMutableDictionary *_shareProfileDictionary;
    NSMutableDictionary *_rateSharingClientMap;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSString *_mediaQueueIdentifier;
    NSMutableDictionary *_rateSharingClientTargetBitrateDict;
}

@property (readonly) struct tagVCMediaQueue { } *mediaQueue;
@property (readonly) unsigned int maxBitrate;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void)dealloc;
- (unsigned int)calculateMaxTargetBitrate;
- (unsigned int)countRateControllersForInterfaceType:(id)a0;
- (BOOL)createMediaQueue;
- (BOOL)deregisterRateSharingClient:(id)a0;
- (void)handleMediaQueueSizeExceedThresholdWithQueueSize:(double)a0 mediaQueueStreamId:(unsigned int)a1 type:(int)a2;
- (BOOL)registerRateSharingClient:(id)a0 forInterfaceType:(unsigned int)a1;
- (void)setTargetBitrate:(unsigned int)a0 fromRateSharingClient:(id)a1;
- (void)setVCMediaQueuePeakBitrateAndMaxTargetBitrate:(unsigned int)a0;
- (void)updateShareProfileForInterfaceType:(id)a0;

@end
