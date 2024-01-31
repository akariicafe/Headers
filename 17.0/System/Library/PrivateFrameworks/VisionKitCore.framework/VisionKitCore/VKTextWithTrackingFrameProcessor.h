@class NSArray, NSMutableOrderedSet, VKTextFrameProcessorConfiguration, VNRecognizeDocumentsRequest;

@interface VKTextWithTrackingFrameProcessor : VKFrameProcessor {
    BOOL _wantsThrottling;
    VKTextFrameProcessorConfiguration *_config;
    NSMutableOrderedSet *_recognizedItems;
    id /* block */ _resultHandler;
    VNRecognizeDocumentsRequest *_request;
    VKTextFrameProcessorConfiguration *_currentConfig;
    unsigned long long _dataType;
}

@property (class, readonly, nonatomic) NSArray *supportedRecognitionLanguages;

@property (copy, nonatomic) VKTextFrameProcessorConfiguration *configuration;
@property (copy, nonatomic) id /* block */ resultHandler;

- (id)init;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)wantsThrottling;
- (void)processFrame:(id)a0;

@end
