@class HMIFaceQualityFilterSVM, NSString, HMIFaceprinter;

@interface HMIFaceClassifierVIP : HMFObject <HMIFaceClassifier, HMFLogging>

@property (readonly) HMIFaceprinter *faceprinter;
@property (readonly) HMIFaceQualityFilterSVM *faceRecognizabilityFilter;
@property (readonly) HMIFaceQualityFilterSVM *faceAestheticQualityFilter;
@property (readonly) double classificationThresholdKnown;
@property (readonly) double classificationThresholdUnknown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
