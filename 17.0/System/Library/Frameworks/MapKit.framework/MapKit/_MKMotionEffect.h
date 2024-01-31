@protocol _MKMotionEffectDelegate;

@interface _MKMotionEffect : UIMotionEffect {
    struct UIOffset { double horizontal; double vertical; } _offset;
}

@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (weak, nonatomic) id<_MKMotionEffectDelegate> delegate;

- (void).cxx_destruct;
- (id)keyPathsAndRelativeValuesForViewerOffset:(struct UIOffset { double x0; double x1; })a0;
- (struct UIOffset { double x0; double x1; })offsetWithScale:(struct UIOffset { double x0; double x1; })a0;
- (struct UIOffset { double x0; double x1; })rawOffset;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })transformWithTranslationScale:(struct UIOffset { double x0; double x1; })a0 rotationScale:(struct UIOffset { double x0; double x1; })a1;

@end
