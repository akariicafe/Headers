@class NSArray, UIColor, UIBlurEffect;

@interface UITextInputAssistantItem : NSObject

@property (readonly, nonatomic, getter=_isSystemItem) BOOL systemItem;
@property (readonly, nonatomic, getter=_hasItemsToDisplay) BOOL hasItemsToDisplay;
@property (readonly, nonatomic, getter=_requiresPredictionDisabled) BOOL requiresPredictionDisabled;
@property (nonatomic, getter=_showsBarButtonItemsInline, setter=_setShowsBarButtonItemsInline:) BOOL showsBarButtonItemsInline;
@property (nonatomic, getter=_isVisibleWhenMinimized, setter=_setVisibleWhenMinimized:) BOOL visibleWhenMinimized;
@property (copy, nonatomic, getter=_centerBarButtonGroups, setter=_setCenterBarButtonGroups:) NSArray *centerBarButtonGroups;
@property (nonatomic, getter=_independentGroupSizes, setter=_setIndependentGroupSizes:) BOOL independentGroupSizes;
@property (nonatomic, getter=_marginOverride, setter=_setMarginOverride:) double marginOverride;
@property (retain, nonatomic, getter=_detachedBackgroundColor, setter=_setDetachedBackgroundColor:) UIColor *detachedBackgroundColor;
@property (copy, nonatomic, getter=_detachedBackgroundEffect, setter=_setDetachedBackgroundEffect:) UIBlurEffect *detachedBackgroundEffect;
@property (retain, nonatomic, getter=_detachedTintColor, setter=_setDetachedTintColor:) UIColor *detachedTintColor;
@property (nonatomic) BOOL allowsHidingShortcuts;
@property (copy, nonatomic) NSArray *leadingBarButtonGroups;
@property (copy, nonatomic) NSArray *trailingBarButtonGroups;

+ (id)_keyboardDeleteItem;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
