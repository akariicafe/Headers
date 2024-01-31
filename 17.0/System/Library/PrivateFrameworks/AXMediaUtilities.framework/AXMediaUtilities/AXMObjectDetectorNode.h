@class VNRecognizeObjectsRequest;

@interface AXMObjectDetectorNode : AXMEvaluationNode {
    VNRecognizeObjectsRequest *_recognizeObjectsRequest;
}

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;
+ (id)possibleObjectClassifications;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
