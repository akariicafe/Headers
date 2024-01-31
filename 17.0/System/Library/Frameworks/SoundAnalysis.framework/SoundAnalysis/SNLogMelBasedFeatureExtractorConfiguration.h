@class NSString;
@protocol SNMLModel;

@interface SNLogMelBasedFeatureExtractorConfiguration : NSObject <SNFeatureExtractorConfiguration> {
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

- (double)sampleRate;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)createProcessorWithError:(id *)a0;
- (unsigned int)outputFeatureSize;
- (unsigned int)windowLengthFrames;

@end
