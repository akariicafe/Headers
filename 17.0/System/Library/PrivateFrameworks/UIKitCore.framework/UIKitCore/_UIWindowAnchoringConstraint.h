@class UIWindow;

@interface _UIWindowAnchoringConstraint : NSAutoresizingMaskLayoutConstraint {
    UIWindow *_window;
}

- (BOOL)_addToEngine:(id)a0 integralizationAdjustment:(double)a1 mutuallyExclusiveConstraints:(id *)a2;

@end
