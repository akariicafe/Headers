@class NSHashTable;

@interface SBIconDragPlatterWindow : SBSecureWindow <SBIconDragPreviewContaining> {
    NSHashTable *_platterViews;
}

- (void).cxx_destruct;
- (id)_iconDragPreviewContainerView;
- (void)beginTrackingPlatterView:(id)a0;
- (void)stopTrackingPlatterView:(id)a0;

@end
