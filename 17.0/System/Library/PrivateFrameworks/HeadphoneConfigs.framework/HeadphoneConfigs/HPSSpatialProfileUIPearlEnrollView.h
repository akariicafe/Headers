@class HPSSpatialProfileCrossHairs;

@interface HPSSpatialProfileUIPearlEnrollView : BKUIPearlEnrollView {
    HPSSpatialProfileCrossHairs *_enrollmentCustomCrossHairs;
}

@property (nonatomic) BOOL faceCaptured;
@property (nonatomic) BOOL pauseBlur;
@property (nonatomic) BOOL forceBlur;

- (void).cxx_destruct;
- (id)crossHairs;
- (id)initWithVideoCaptureSession:(id)a0 inSheet:(BOOL)a1 squareNeedsPositionLayout:(BOOL)a2;
- (void)setCameraBlurAmount:(double)a0 useShade:(BOOL)a1 duration:(double)a2 completion:(id /* block */)a3;
- (void)nudgeLeft:(id /* block */)a0;
- (void)nudgeRight:(id /* block */)a0;

@end
