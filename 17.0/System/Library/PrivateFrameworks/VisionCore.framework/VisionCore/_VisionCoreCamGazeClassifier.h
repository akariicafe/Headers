@class NSString, VisionCoreTensorDescriptor;

@interface _VisionCoreCamGazeClassifier : NSObject <VisionCoreCamGazeClassifier> {
    VisionCoreTensorDescriptor *_gazeProbabilitiesOutputDescriptor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_initWithGazeProbabilitiesOutputDescriptor:(id)a0;
- (BOOL)getGazeClassification:(long long *)a0 fromGazeProbabilitiesOutputData:(id)a1 error:(id *)a2;

@end
