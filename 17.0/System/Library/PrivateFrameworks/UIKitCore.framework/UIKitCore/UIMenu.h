@class NSArray, NSString, UIView;
@protocol UIMenuForcedAutomaticSelectionDelegate;

@interface UIMenu : UIMenuElement <_UIMenuElementStateObserver>

@property (nonatomic) struct { BOOL isPreparedForDisplay; BOOL hasVisibleSelectedItem; BOOL hasDeepHierarchy; BOOL hasAtLeastOneVisibleItem; BOOL hasVisibleLargePalette; } metadata;
@property (copy, nonatomic) id /* block */ headerViewProvider;
@property (readonly, nonatomic) UIView *headerView;
@property (nonatomic) BOOL forceAutomaticSelection;
@property (nonatomic) unsigned long long behaviorOptions;
@property (weak, nonatomic) id<UIMenuForcedAutomaticSelectionDelegate> forcedAutomaticSelectionDelegate;
@property (nonatomic, setter=_setResolvedElementSize:) long long _resolvedElementSize;
@property (nonatomic, setter=_setSurfacesSelectionState:) BOOL _surfacesSelectionState;
@property (readonly, copy, nonatomic) NSArray *_selectedElements;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long options;
@property (nonatomic) long long preferredElementSize;
@property (readonly, nonatomic) NSArray *children;
@property (readonly, nonatomic) NSArray *selectedElements;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)_defaultInlineMenuWithIdentifier:(id)a0 children:(id)a1;
+ (id)_defaultMenuImageNames;
+ (id)_defaultMenuTitles;
+ (id)_defaultMenuWithIdentifier:(id)a0 children:(id)a1;
+ (id)_defaultMenuWithIdentifier:(id)a0 options:(unsigned long long)a1 children:(id)a2;
+ (id)menuWithChildren:(id)a0;
+ (id)menuWithTitle:(id)a0 children:(id)a1;
+ (id)menuWithTitle:(id)a0 image:(id)a1 identifier:(id)a2 options:(unsigned long long)a3 children:(id)a4;
+ (id)menuWithTitle:(id)a0 imageName:(id)a1 identifier:(id)a2 options:(unsigned long long)a3 children:(id)a4;

- (void)_acceptMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2 deferredElementVisit:(id /* block */)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_acceptMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (id)_immutableCopy;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 leafVisit:(id /* block */)a1;
- (BOOL)_acceptBoolMenuVisit:(id /* block */)a0 commandVisit:(id /* block */)a1 actionVisit:(id /* block */)a2;
- (id)_copyWithOptions:(unsigned long long)a0;
- (void)_elementStateDidChange:(id)a0;
- (void)_elementWillPerformAction:(id)a0;
- (BOOL)_hasGlobalHeader;
- (id)_immutableCopySharingLeafObservers:(BOOL)a0;
- (id)_mutableCopy;
- (BOOL)_shouldShowSelectionState;
- (void)addAsStateObserver;
- (id)childElementForElement:(id)a0;
- (void)establishInitialDefaultSingleSelection;
- (id)initWithMenu:(id)a0 overrideChildren:(id)a1;
- (id)initWithTitle:(id)a0 image:(id)a1 imageName:(id)a2 identifier:(id)a3 options:(unsigned long long)a4 children:(id)a5;
- (id)menuByReplacingChildren:(id)a0;
- (id)recursivelySelectDefaultForcedSelection:(BOOL)a0;
- (void)removeAsStateObserver;
- (void)updateChildrenForSingleSelectedElement:(id)a0;

@end
