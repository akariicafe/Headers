@class _UIBarButtonItemData, UIBarButtonItemStateAppearance;
@protocol _UIBarButtonItemDataFallback, _UIBarButtonItemAppearanceChangeObserver;

@interface UIBarButtonItemAppearance : NSObject <NSCopying, NSSecureCoding> {
    UIBarButtonItemStateAppearance *_states[4];
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) _UIBarButtonItemData *_data;
@property (weak, nonatomic, setter=_setChangeObserver:) id<_UIBarButtonItemAppearanceChangeObserver> _changeObserver;
@property (retain, nonatomic, setter=_setFallback:) id<_UIBarButtonItemDataFallback> _fallback;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *normal;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *highlighted;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *disabled;
@property (readonly, nonatomic) UIBarButtonItemStateAppearance *focused;

- (void)_describeInto:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithStyle:(long long)a0;
- (void)_setData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_setBackIndicatorImage:(id)a0 transitionMaskImage:(id)a1;
- (void)configureWithDefaultForStyle:(long long)a0;
- (id)copy;
- (void)_updateToSupportBackIndicatorsCopyingIndicatorsAndFallbackFrom:(id)a0;
- (id)description;
- (id)initWithBarButtonItemAppearance:(id)a0;
- (void)_resetBackIndicatorImages;
- (void).cxx_destruct;
- (void)_writeToStorage:(id /* block */)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_proxyForState:(long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_updateDataTo:(id)a0 signal:(BOOL)a1;

@end
