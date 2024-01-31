@class UIVibrancyEffect, NSArray, UIBlurEffect, UIColor, UIImage, _UIBarBackgroundAppearanceData;
@protocol _UIBarAppearanceChangeObserver;

@interface UIBarAppearance : NSObject <NSCopying, NSSecureCoding> {
    id<_UIBarAppearanceChangeObserver> _changeObserver;
    _UIBarBackgroundAppearanceData *_backgroundData;
    long long _batchedChanges;
    BOOL _batchingChanges;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) BOOL _hasTransparentBackground;
@property (copy, nonatomic, setter=_setSelectedItemVibrancyEffect:) UIVibrancyEffect *_selectedItemVibrancyEffect;
@property (copy, nonatomic) NSArray *backgroundEffects;
@property (copy, nonatomic) UIVibrancyEffect *shadowEffect;
@property (readonly, nonatomic) long long idiom;
@property (copy, nonatomic) UIBlurEffect *backgroundEffect;
@property (copy, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (nonatomic) long long backgroundImageContentMode;
@property (copy, nonatomic) UIColor *shadowColor;
@property (retain, nonatomic) UIImage *shadowImage;

- (void)configureWithoutShadow;
- (void)_describeInto:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)_doneButtonAppearance;
- (unsigned long long)_hashInto:(unsigned long long)a0;
- (void)_decodeFromCoder:(id)a0;
- (void)configureWithDefaultShadow;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBarAppearance:(id)a0;
- (id)_plainButtonAppearance;
- (id)_backgroundData;
- (id)copy;
- (id)_backButtonAppearance;
- (void)configureWithOpaqueBackground;
- (id)_barTitleData;
- (id)_tabLayoutAppearanceData;
- (void)configureWithDefaultBackground;
- (id)_plainButtonAppearanceData;
- (id)description;
- (id)_doneButtonAppearanceData;
- (id)initWithIdiom:(long long)a0;
- (id)_compactInlineTabButtonAppearanceData;
- (void)_copyFromAppearance:(id)a0;
- (id)_backButtonAppearanceData;
- (void).cxx_destruct;
- (void)_setupDefaults;
- (BOOL)_checkEqualTo:(id)a0;
- (void)configureWithTransparentBackground;
- (BOOL)isEqual:(id)a0;
- (id)_stackedTabButtonAppearanceData;
- (id)_inlineTabButtonAppearanceData;
- (void)_completeInit;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
