@interface CAMFocusCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _focusMode;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } _focusPointOfInterest;
@property (readonly, nonatomic) BOOL _shouldUseSmoothFocus;

- (id)initWithFocusMode:(long long)a0 atPointOfInterest:(struct CGPoint { double x0; double x1; })a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithFocusMode:(long long)a0;
- (id)initWithFocusMode:(long long)a0 smooth:(BOOL)a1;
- (void)executeWithContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFocusMode:(long long)a0 atPointOfInterest:(struct CGPoint { double x0; double x1; })a1 smooth:(BOOL)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
