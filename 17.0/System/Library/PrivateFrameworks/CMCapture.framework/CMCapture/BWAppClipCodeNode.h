@class FigWeakReference, NSObject;
@protocol OS_dispatch_queue, BWMetadataDetectedResultsObserver;

@interface BWAppClipCodeNode : BWNode {
    struct AppC3DSession { } *_appClipCodeSession;
    BOOL _appC3DAvailable;
    NSObject<OS_dispatch_queue> *_processingQueue;
    FigWeakReference *_weakSelf;
    BOOL _haveInputTransform;
    int _rotationDegrees;
    BOOL _mirroringHorizontal;
    BOOL _mirroringVertical;
    long long _lastAppClipCodeCount;
}

@property (nonatomic) id<BWMetadataDetectedResultsObserver> detectedResultsObserver;

+ (void)initialize;

- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (id)initWithProcessingQueuePriority:(unsigned int)a0;

@end
