@interface UIInputViewSetPlacementPlaceholder : UIInputViewSetPlacementOnScreen {
    double _height;
}

+ (id)placementWithHeight:(double)a0;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })remoteIntrinsicContentSizeForInputViewInSet:(id)a0 includingIAV:(BOOL)a1;
- (id)verticalConstraintForInputViewSet:(id)a0 hostView:(id)a1 containerView:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
