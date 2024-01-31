@class VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor, NSString, VisionCoreTensorDescriptor, NSURL;

@interface VisionCoreSceneNetInferenceNetworkDescriptor : VisionCoreEspressoNetworkDescriptor {
    NSURL *_aneSpecificModelURL;
    NSString *_sceneLabelsFileName;
    NSString *_sceneLabelRelationshipsFileName;
    NSString *_sceneOperatingPointsFileName;
    NSString *_entityNetLabelsFileName;
    NSString *_entityNetOperatingPointsFileName;
    NSString *_pca256FileName;
    NSString *_aestheticsLabelsFileName;
    NSString *_objectDetectorLabelsFileName;
    NSString *_fingerprintsHasherFileName;
}

@property (readonly, nonatomic) unsigned long long model;
@property (readonly, copy, nonatomic) NSString *analyzerName;
@property (readonly, copy, nonatomic) NSString *inputImageBlobName;
@property (readonly, nonatomic) NSURL *sceneLabelsFileURL;
@property (readonly, nonatomic) NSURL *sceneLabelRelationshipsFileURL;
@property (readonly, copy, nonatomic) NSString *sceneRepresentationBlobName;
@property (readonly, copy, nonatomic) NSString *sceneClassificationLabelsBlobName;
@property (readonly, nonatomic) NSURL *sceneOperatingPointsFileURL;
@property (readonly, nonatomic) NSURL *entityNetLabelsFileURL;
@property (readonly, copy, nonatomic) NSString *entityNetLabelsBlobName;
@property (readonly, nonatomic) NSURL *entityNetOperatingPointsFileURL;
@property (readonly, nonatomic) NSURL *pca256FileURL;
@property (readonly, nonatomic) NSURL *aestheticsLabelsFileURL;
@property (readonly, copy, nonatomic) NSString *aestheticsScoresBlobName;
@property (readonly, copy, nonatomic) NSString *aestheticsAttributesBlobName;
@property (readonly, copy, nonatomic) NSString *saliencyAHeatMapBlobName;
@property (readonly, copy, nonatomic) NSString *saliencyOHeatMapBlobName;
@property (readonly, copy, nonatomic) NSString *sliderNetBlobNamePrefix;
@property (readonly, nonatomic) BOOL shouldInitializeAdditionalModelHeads;
@property (readonly, nonatomic) NSURL *objectDetectorLabelsFileURL;
@property (readonly, copy, nonatomic) NSString *objectDetectorOutputBlobBaseName;
@property (readonly, copy, nonatomic) NSString *objectDetectorScoresOutputBlobName;
@property (readonly, copy, nonatomic) NSString *objectDetectorCoordinatesOutputBlobName;
@property (readonly, nonatomic) NSURL *fingerprintsHasherFileURL;
@property (readonly, copy, nonatomic) NSString *fingerprintsOutputBlobName;
@property (readonly, nonatomic) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *junkLeafCustomClassifierDescriptor;
@property (readonly, nonatomic) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *junkHierarchicalCustomClassifierDescriptor;
@property (readonly, nonatomic) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *VNVYvzEtX1JlUdu8xx5qhDICustomClassifierDescriptor;
@property (readonly, nonatomic) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *potentialLandmarksCustomClassifierDescriptor;
@property (readonly, nonatomic) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *VN5kJNH3eYuyaLxNpZr5Z7ziCustomClassifierDescriptor;
@property (readonly, nonatomic) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *VNdGg5skzXHSAENO6T3enHECustomClassifierDescriptor;
@property (readonly, nonatomic) VisionCoreSceneNetInferenceNetworkCustomClassifierDescriptor *cityNatureCustomClassifierDescriptor;
@property (readonly, nonatomic) VisionCoreTensorDescriptor *sceneprintOutput;
@property (readonly, nonatomic) VisionCoreTensorDescriptor *sceneLabelConfidencesOutput;

+ (BOOL)supportsSecureCoding;
+ (id)descriptorForModel:(unsigned long long)a0 requireObjDetNet:(BOOL)a1 requireSliderNet:(BOOL)a2 error:(id *)a3;
+ (id)sceneNetV3AndReturnError:(id *)a0;
+ (id)sceneNetV5AndReturnError:(id *)a0;
+ (id)sceneNetV5CameraAndReturnError:(id *)a0;
+ (BOOL)_getAnalyzerName:(id *)a0 ANESpecificAnalyzerName:(id *)a1 specifier:(id *)a2 forModel:(unsigned long long)a3 objDetNet:(BOOL)a4 sliderNet:(BOOL)a5 error:(id *)a6;
+ (id)sceneNetObjDetNetSliderNetV3AndReturnError:(id *)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)ANESpecificURL;
- (id)_newCustomClassifierDescriptorWithModelName:(id)a0 labelsFileName:(id)a1 inputBlobName:(id)a2 outputBlobName:(id)a3 error:(id *)a4;

@end
