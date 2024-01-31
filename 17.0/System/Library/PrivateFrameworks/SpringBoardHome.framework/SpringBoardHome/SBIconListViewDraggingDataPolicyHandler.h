@class NSString, NSMapTable;

@interface SBIconListViewDraggingDataPolicyHandler : NSObject <LSOpenResourceOperationDelegate, SBIconListViewDraggingPolicyHandling> {
    NSMapTable *_sourceURLsByOperationMapTable;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)dropInteraction:(id)a0 canHandleSession:(id)a1;
- (void).cxx_destruct;
- (void)openResourceOperation:(id)a0 didFailWithError:(id)a1;
- (void)openResourceOperation:(id)a0 didFinishCopyingResource:(id)a1;
- (id)_bestSupportedUTIForDragItem:(id)a0 supportedTypes:(id)a1;
- (id)_currentDraggingIconViewInView:(id)a0 forLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_removeAnySourceURLForOperation:(id)a0;
- (BOOL)allowsSpringLoadForSession:(id)a0 onIconView:(id)a1;
- (unsigned long long)dragHitRegionForDropSession:(id)a0 iconListView:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 icon:(id)a3;
- (void)handleSpringLoadOnIconView:(id)a0;

@end
