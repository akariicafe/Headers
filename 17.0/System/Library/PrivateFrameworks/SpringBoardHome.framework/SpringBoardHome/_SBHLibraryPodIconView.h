@interface _SBHLibraryPodIconView : SBIconView

+ (BOOL)supportsDragInteraction;
+ (BOOL)supportsCursorInteraction;
+ (BOOL)supportsTapGesture;
+ (BOOL)supportsPreviewInteraction;

- (id)createNewIconLabelViewFactory;

@end
