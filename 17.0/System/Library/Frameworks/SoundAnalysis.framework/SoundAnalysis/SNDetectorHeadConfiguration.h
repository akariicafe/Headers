@class NSString, NSPredicate;
@protocol SNProcessorCreating, SNMLModel;

@interface SNDetectorHeadConfiguration : NSObject {
    unsigned int _windowLengthFrames;
    unsigned int _stepSizeFrames;
    id<SNProcessorCreating> _featureExtractorConfiguration;
    NSString *_detectorIdentifier;
    id<SNMLModel> _model;
    NSString *_outputLabel;
    double _sampleRate;
    NSPredicate *_resultsPredicate;
    long long _resultsPredicateLeakCount;
}

- (void).cxx_destruct;

@end
