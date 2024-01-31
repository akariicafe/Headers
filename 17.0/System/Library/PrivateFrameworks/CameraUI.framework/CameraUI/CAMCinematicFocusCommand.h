@interface CAMCinematicFocusCommand : CAMCaptureCommand

@property (readonly, nonatomic) long long _metadataObjectID;
@property (readonly, nonatomic) struct CGPoint { double x; double y; } _pointOfInterest;
@property (readonly, nonatomic) BOOL _useFixedOpticalFocus;
@property (readonly, nonatomic) BOOL _useHardFocus;

- (void)executeWithContext:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithMetadataObjectID:(long long)a0 atPointOfInterest:(struct CGPoint { double x0; double x1; })a1 useFixedOpticalFocus:(BOOL)a2 useHardFocus:(BOOL)a3;

@end
