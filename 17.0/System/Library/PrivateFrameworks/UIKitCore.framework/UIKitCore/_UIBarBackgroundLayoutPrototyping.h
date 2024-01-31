@class UIColor;

@interface _UIBarBackgroundLayoutPrototyping : _UIBarBackgroundLayout {
    UIColor *_colorWash;
}

+ (id)prototypingLayoutForBarType:(long long)a0;
+ (BOOL)prototypingEnabled;
+ (void)registerPrototypingCallback:(id /* block */)a0;

- (BOOL)shouldUseExplicitGeometry;
- (void)describeInto:(id)a0;
- (id)bg1ShadowColor;
- (BOOL)bg1HasShadow;
- (id)bg1Color;
- (id)bg1Effects;
- (void).cxx_destruct;

@end
