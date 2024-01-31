@interface BWDeferredPipelineParameters : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int nrfVersion;
@property (nonatomic) int noiseReductionAndFusionScheme;
@property (nonatomic) BOOL intelligentDistortionCorrectionEnabled;
@property (nonatomic) BOOL geometricDistortionCorrectionEnabled;
@property (nonatomic) BOOL dcProcessingWithDepthSupported;
@property (nonatomic) int distortionCorrectionVersion;
@property (nonatomic) int deepZoomVersion;
@property (nonatomic) int deepZoomMode;
@property (nonatomic) int semanticRenderingVersion;
@property (nonatomic) BOOL generateInferencesForSemanticProcessingIfNeeded;
@property (nonatomic) BOOL quadraProcessingSupportEnabled;
@property (nonatomic) BOOL canProcessEnhancedResolution;
@property (nonatomic) BOOL continuousZoomWithDepthSupported;
@property (nonatomic) int pearlModuleType;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
