@interface SBSnapshotWindow : UIWindow {
    long long _orientation;
}

+ (BOOL)_isSecure;

- (long long)interfaceOrientation;
- (id)initWithWindowScene:(id)a0 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 orientation:(long long)a2;

@end
