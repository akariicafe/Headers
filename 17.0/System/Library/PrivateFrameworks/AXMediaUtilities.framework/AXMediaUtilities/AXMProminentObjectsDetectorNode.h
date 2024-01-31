@class VNGenerateAttentionBasedSaliencyImageRequest;

@interface AXMProminentObjectsDetectorNode : AXMEvaluationNode

@property (retain, nonatomic) VNGenerateAttentionBasedSaliencyImageRequest *_imageSaliencyRequest;

+ (BOOL)supportsSecureCoding;
+ (id)title;
+ (BOOL)isSupported;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)evaluate:(id)a0 metrics:(id)a1;
- (void)nodeInitialize;
- (BOOL)requiresVisionFramework;
- (BOOL)validateVisionKitSoftLinkSymbols;

@end
