@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    BOOL _hasBusyBackground;
}

- (id)backgroundColorWithTintColor:(id)a0;
- (id)foregroundColor;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2 hasBusyBackground:(BOOL)a3;
- (Class)foregroundStyleClass;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2;
- (BOOL)isTransparent;
- (BOOL)isTranslucent;
- (long long)legibilityStyle;
- (id)initWithRequest:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldUseVisualAltitude;
- (id)newForegroundStyleWithHeight:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
