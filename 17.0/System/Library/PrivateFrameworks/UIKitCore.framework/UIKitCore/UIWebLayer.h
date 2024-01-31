@interface UIWebLayer : CALayer {
    BOOL _layoutsSuspended;
}

- (void)setNeedsLayout;
- (void)setLayoutsSuspended:(BOOL)a0;

@end
