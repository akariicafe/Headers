@class NSString, UISSlotStyle;
@protocol _UISlotViewContentDelegate, UISSlotAnyContent;

@interface _UISlotView : UIView {
    NSString *_localization;
    id /* block */ _slotStyleResolver;
    id /* block */ _slotAnyContentProvider;
    id<_UISlotViewContentDelegate> _contentDelegate;
    UISSlotStyle *_currentSlotStyle;
    struct CGSize { double width; double height; } _intrinsicContentSize;
    id<UISSlotAnyContent> _slotContent;
    unsigned long long _currentGeneration;
}

@property (copy, nonatomic, setter=_setSlotAnyContentProvider:) id /* block */ _slotAnyContentProvider;
@property (copy, nonatomic, setter=_setSlotStyleResolver:) id /* block */ _slotStyleResolver;
@property (weak, nonatomic, setter=_setContentDelegate:) id<_UISlotViewContentDelegate> _contentDelegate;

+ (BOOL)accessInstanceVariablesDirectly;

- (id)init;
- (void)dealloc;
- (void)displayLayer:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)tintColorDidChange;
- (void)_updateContent;
- (void).cxx_destruct;
- (void)_overlayView:(id)a0 centerInView:(id)a1;
- (void)_slotStyleDidChange:(id)a0;

@end
