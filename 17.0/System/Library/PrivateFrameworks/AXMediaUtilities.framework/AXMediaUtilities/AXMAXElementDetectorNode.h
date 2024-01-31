@class AXMIconClassDetectorNode, AXMindNetDetector;

@interface AXMAXElementDetectorNode : AXMMobileAssetEvaluationNode {
    AXMIconClassDetectorNode *_iconDetector;
}

@property (readonly, nonatomic) AXMindNetDetector *mindNetDetector;
@property (readonly, nonatomic) AXMindNetDetector *clickabilityDetector;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (unsigned long long)maxSupportedFormatVersion;
- (unsigned long long)minSupportedFormatVersion;
- (void).cxx_destruct;
- (id)mobileAssetType;
- (double)IoUForbb1:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bb2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)_nonMaxSupression:(id)a0 iouThreshold:(double)a1;
- (void)_evaluateANOD:(id)a0 metrics:(id)a1;
- (id)_imageByWipingTextFromRects:(id)a0 image:(id)a1 colorSpace:(struct CGColorSpace { } *)a2 ciContext:(id)a3;
- (void)_initializeClickabilityModel;
- (void)_initializeIconDetector;
- (void)_initializeMindNetDetector;
- (id)_performCrossClassNMSForDetections:(id)a0 iouThreshold:(double)a1;
- (id)_screenEquivalenceToken:(id)a0;
- (id)contentVersionKey;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (id)mlModelClasses;
- (id)modelResourceNames;
- (long long)remapUIClassForClickability:(int)a0 andClass:(long long)a1;

@end
