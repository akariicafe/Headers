@class NSObject, NSString, HMFWeakObject;
@protocol OS_dispatch_queue, HMIVideoDecoderDelegate;

@interface HMIVideoDecoder : HMIVideoProcessingNode <HMFLogging>

@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSampleBufferPTS;
@property struct { long long value; int timescale; unsigned int flags; long long epoch; } lastSampleBufferDTS;
@property (readonly) unsigned long long reorderBufferSize;
@property struct opaqueCMBufferQueue { } *buffer;
@property struct OpaqueVTDecompressionSession { } *session;
@property (readonly) HMFWeakObject *weakDecoder;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (weak) id<HMIVideoDecoderDelegate> delegate;
@property (retain) NSString *logIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void)dealloc;
- (void)flush;
- (void).cxx_destruct;
- (BOOL)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 outputFrame:(BOOL)a1;
- (BOOL)_createSessionWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0;
- (void)_didDecodeSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_evictSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (void)_failWithDescription:(id)a0;
- (void)handleSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0;
- (id)initWithFrameReordering:(BOOL)a0;

@end
