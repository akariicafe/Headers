@class NSString;

@interface PBUIWallpaperEffectConfiguration : NSObject <NSCopying, BSDescriptionProviding> {
    BOOL _includeTint;
    long long _style;
    long long _userInterfaceStyle;
    struct { long long backdropStyle; long long stackingLevel; long long renderingHint; double blurRadius; double saturationDeltaFactor; double grayscaleTintLevel; double grayscaleTintAlpha; long long materialStyle; } _backdropParameters;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (id)succinctDescription;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
