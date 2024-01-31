@class UIImage, UIView;
@protocol SBUILegibilitySettings, SBUILegibilityEngine, _SBUILegibilityContainerContentView;

@interface SBUILegibilityContainerView : UIView {
    UIView<_SBUILegibilityContainerContentView> *_drawView;
    BOOL _dirty;
}

@property (nonatomic) double strength;
@property (readonly, nonatomic) UIImage *strengthenedImage;
@property (retain, nonatomic) UIImage *image;
@property (readonly, nonatomic) UIImage *processedImage;
@property (weak, nonatomic) id<SBUILegibilityEngine> legibilityEngine;
@property (retain, nonatomic) id<SBUILegibilitySettings> legibilitySettings;
@property (readonly, nonatomic) long long options;

- (BOOL)updateOptions:(long long)a0;
- (void)applySettingsForLegibilityStyle:(long long)a0;
- (void)_setDrawImage:(id)a0;
- (void)sizeToFit;
- (BOOL)_updateFilters;
- (BOOL)_shouldAnimatePropertyWithKey:(id)a0;
- (id)_contentColor;
- (BOOL)_usesSecondaryColor;
- (id)_drawView;
- (void).cxx_destruct;
- (BOOL)_usesColorFilters;
- (id)buildDrawView;
- (void)layoutSubviews;
- (void)_applyStrength;
- (void)setImage:(id)a0 strengthenedImage:(id)a1 strength:(double)a2;

@end
