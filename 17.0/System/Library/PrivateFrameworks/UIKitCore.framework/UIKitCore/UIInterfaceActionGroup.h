@class UIInterfaceActionVisualStyle, NSString, NSPointerArray, NSArray, UIInterfaceAction;

@interface UIInterfaceActionGroup : NSObject <UIInterfaceActionDisplayPropertyObserver, NSCopying>

@property (readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *actionsBySection;
@property (readonly, nonatomic) struct CGSize { double width; double height; } leadingImageLayoutSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } trailingImageLayoutSize;
@property (retain, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle;
@property (readonly, nonatomic) NSArray *actions;
@property (retain, nonatomic) UIInterfaceAction *preferredAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionGroupWithActions:(id)a0;
+ (id)actionGroupWithActionsBySection:(id)a0;
+ (BOOL)changedProperties:(id)a0 containsAny:(id)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTitle:(id)a0 actionsBySection:(id)a1;
- (void)_addActionGroupDisplayPropertyObserver:(id)a0;
- (void)_beginObservingActions;
- (id)_deepCopyOfActionsBySection;
- (void)_endObservingActions;
- (void)_notifyObserversDidChangeActionProperty:(id)a0;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_performWithActionObservingDisabled:(id /* block */)a0;
- (void)_reloadImageLayoutSizesUsingExistingActionImages;
- (void)_removeActionGroupDisplayPropertyObserver:(id)a0;
- (void)_updateActionImageLayoutSizes;
- (void)interfaceAction:(id)a0 reloadDisplayedContentActionProperties:(id)a1;
- (void)interfaceAction:(id)a0 reloadDisplayedContentVisualStyle:(id)a1;
- (void)setLeadingImageLayoutSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTrailingImageLayoutSize:(struct CGSize { double x0; double x1; })a0;

@end
