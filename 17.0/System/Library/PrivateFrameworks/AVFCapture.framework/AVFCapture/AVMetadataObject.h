@class NSString, AVMetadataObjectInternal;

@interface AVMetadataObject : NSObject {
    AVMetadataObjectInternal *_objectInternal;
}

@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } time;
@property (readonly) struct { long long x0; int x1; unsigned int x2; long long x3; } duration;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } bounds;
@property (readonly) NSString *type;

+ (id)derivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;

- (id)init;
- (void)dealloc;
- (id)input;
- (long long)groupID;
- (BOOL)isEqual:(id)a0;
- (long long)detectionSource;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 isVideoMirrored:(BOOL)a2 rollAdjustment:(double)a3;
- (id)initWithType:(id)a0 time:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 duration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 optionalInfoDict:(id)a4 originalMetadataObject:(id)a5 sourceCaptureInput:(id)a6;
- (id)originalMetadataObject;
- (void)setDetectionSource:(long long)a0;
- (unsigned long long)syntheticFocusMode;

@end
