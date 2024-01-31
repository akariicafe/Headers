@class NSSet, NSString, PBUICodableImage;
@protocol PBUIImageTreatment;

@interface PBUITreatImageRequest : NSObject <CALayerDelegate, PBUIRenderRequest, NSCopying, NSSecureCoding, BSDescriptionProviding> {
    PBUICodableImage *_codableImage;
}

@property (class, readonly, nonatomic) NSSet *secureCodableTreatmentClasses;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct CGImage { } *image;
@property (nonatomic) double scale;
@property (nonatomic) double downscaleFactor;
@property (retain, nonatomic) id<PBUIImageTreatment> treatment;
@property (copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSublayersOfLayer:(id)a0;
- (void)dealloc;
- (id)succinctDescriptionBuilder;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)succinctDescription;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)CIImage;
- (BOOL)configureState:(inout struct PBUIRenderState { struct CGSize { double x0; double x1; } x0; double x1; id x2; id x3; } *)a0 error:(out id *)a1;
- (struct CGSize { double x0; double x1; })imagePixelSize;
- (id)initWithImage:(id)a0 downscaleFactor:(double)a1 treatment:(id)a2;
- (id)initWithImage:(struct CGImage { } *)a0 scale:(double)a1 downscaleFactor:(double)a2 treatment:(id)a3;
- (struct CGSize { double x0; double x1; })requestedOutputSizeInPixels;
- (struct CGSize { double x0; double x1; })requestedOutputSizeInPointsAtScale:(double)a0;
- (id)treatmentOptions;
- (BOOL)usesCoreImageForTreatment:(id)a0;

@end
