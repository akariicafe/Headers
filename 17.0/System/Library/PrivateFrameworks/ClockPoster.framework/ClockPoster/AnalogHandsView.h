@interface AnalogHandsView : CLKUIAnalogHandsView {
    double _scaleFactor;
    struct CGSize { double width; double height; } _size;
}

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setOverrideDate:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (double)_timeAnimationFramesPerSecondForDevice:(id)a0;
- (id)hourHandConfiguration;
- (id)minuteHandConfiguration;
- (id)secondHandConfiguration;
- (void)_startNewSecondHandAnimation;
- (void)_stopHandAnimation;

@end
