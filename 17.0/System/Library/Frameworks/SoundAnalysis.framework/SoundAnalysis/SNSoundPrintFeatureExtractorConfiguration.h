@class NSString;
@protocol SNMLModel;

@interface SNSoundPrintFeatureExtractorConfiguration : NSObject <SNFeatureExtractorConfiguration> {
    id<SNMLModel> _model;
}

@property (readonly) double sampleRate;
@property (readonly) unsigned int windowLengthFrames;
@property (readonly) unsigned int stepSizeFrames;
@property (readonly) unsigned int outputFeatureSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
