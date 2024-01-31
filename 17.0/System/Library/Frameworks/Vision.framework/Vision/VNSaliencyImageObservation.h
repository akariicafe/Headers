@class NSArray;

@interface VNSaliencyImageObservation : VNPixelBufferObservation {
    struct CGSize { double width; double height; } _mOriginalImageSize;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _mSalientRegion;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _mHighlySalientRegion;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mComputeBoundingBoxesLock;
    NSArray *_mSalientObjects;
}

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } narrowedBoundingBox;
@property (readonly, nonatomic) NSArray *salientObjects;

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_computeBoundingBoxes;
- (struct __CVBuffer { } *)createSaliencyImageAndReturnError:(id *)a0;
- (id)initWithOriginatingRequestSpecifier:(id)a0 rawSaliencyImage:(struct __CVBuffer { } *)a1 originalImageSize:(struct CGSize { double x0; double x1; })a2 salientObjectBoundingBoxes:(id)a3;
- (id)salientObjectsAndReturnError:(id *)a0;
- (id)vn_cloneObject;

@end
