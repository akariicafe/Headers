@class NSString;
@protocol PXGSublayoutFaultingDelegate;

@interface PXGStackLayout : PXGLayout <PXGDataSourceDrivenLayout> {
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _updateFlags;
    struct { unsigned long long needsUpdate; unsigned long long updated; BOOL isPerformingUpdate; BOOL willPerformUpdate; } _postUpdateFlags;
    BOOL _isUpdatingSublayouts;
    struct { double x0; double x1; double x2; } *_sublayoutOriginsBeforeUpdate;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _flexibleRegionInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultInOutsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } faultOutOutsets;
@property (nonatomic) long long axis;
@property (nonatomic) double interlayoutSpacing;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (nonatomic) BOOL alignsFirstSublayoutToVisibleTopEdge;
@property (nonatomic) BOOL alignsLastSublayoutToVisibleBottomEdge;
@property (weak, nonatomic) id<PXGSublayoutFaultingDelegate> sublayoutFaultingDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didUpdate;
- (void)didAddSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)_updateSublayouts;
- (id)init;
- (void)willRemoveSublayout:(id)a0 atIndex:(long long)a1 flags:(unsigned long long)a2;
- (void)scrollSpeedRegimeDidChange;
- (void)dealloc;
- (void)willUpdate;
- (BOOL)definesContextForPointReferences;
- (void)update;
- (void)visibleRectDidChange;
- (void)insertSublayoutProvider:(id)a0 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)displayScaleDidChange;
- (void)referenceDepthDidChange;
- (void)sublayoutNeedsUpdate:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsetsForSublayout:(id)a0;
- (void).cxx_destruct;
- (void)sublayoutDidChangeContentSize:(id)a0;
- (void)referenceSizeDidChange;
- (void)sublayoutDidChangeLastBaseline:(id)a0;
- (long long)scrollableAxis;
- (void)viewEnvironmentDidChange;
- (void)_invalidateEstimatedSublayoutContentSizes;
- (void)_invalidateFirstFloatingLayout;
- (void)_updateFirstFloatingLayout;
- (void)_updateInterlayoutSpacing;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })flexibleRegionInsets;
- (void)invalidateAdditionalSafeAreaInsets;

@end
