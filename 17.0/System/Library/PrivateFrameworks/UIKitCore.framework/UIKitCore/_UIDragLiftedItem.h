@class _UIPlatterView, UITargetedDragPreview, UIView;

@interface _UIDragLiftedItem : NSObject

@property (retain, nonatomic) UIView *previewContainer;
@property (retain, nonatomic) _UIPlatterView *platterView;
@property (retain, nonatomic) UITargetedDragPreview *targetedPreview;
@property (nonatomic) BOOL sourceViewWasAdded;
@property (nonatomic) double liftAlpha;

- (void).cxx_destruct;

@end
