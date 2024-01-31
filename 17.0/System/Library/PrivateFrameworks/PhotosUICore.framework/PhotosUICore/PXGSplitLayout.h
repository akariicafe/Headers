@class PXGLayout;

@interface PXGSplitLayout : PXGLayout {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _additionalUpdateFlags;
    BOOL _settingSublayouts;
    BOOL _isUpdatingSublayouts;
    BOOL _isPerformingAdditionalUpdate;
}

@property (readonly, nonatomic) long long firstSublayoutIndex;
@property (readonly, nonatomic) long long secondSublayoutIndex;
@property (readonly, nonatomic) BOOL allowsRepeatedSublayoutsUpdates;
@property (retain, nonatomic) PXGLayout *firstSublayout;
@property (retain, nonatomic) PXGLayout *secondSublayout;
@property (nonatomic) long long mode;
@property (nonatomic) BOOL floatingModesRespectSafeArea;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL shouldExcludeTopAndBottomPaddingFromReferenceSize;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } presentedPadding;
@property (nonatomic) long long objectReferenceLookup;

- (void)didUpdate;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)removeSublayoutsInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_performUpdateSublayoutGeometries;
- (void)scrollSpeedRegimeDidChange;
- (void)_replaceSublayout:(id)a0 withSublayout:(id)a1 atIndex:(long long)a2;
- (void)willUpdate;
- (BOOL)definesContextForPointReferences;
- (void)update;
- (void)visibleRectDidChange;
- (void)didChangeSublayoutOrigins;
- (void)displayScaleDidChange;
- (void)referenceDepthDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (void)_updateSublayoutGeometries;
- (void)userInterfaceDirectionDidChange;
- (void).cxx_destruct;
- (long long)sublayoutIndexForObjectReference:(id)a0 options:(unsigned long long)a1 updatedObjectReference:(out id *)a2;
- (void)safeAreaInsetsDidChange;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)referenceSizeDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (long long)scrollableAxis;
- (void)viewEnvironmentDidChange;

@end
