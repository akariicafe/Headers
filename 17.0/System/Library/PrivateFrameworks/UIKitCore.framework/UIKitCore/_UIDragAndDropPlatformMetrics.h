@interface _UIDragAndDropPlatformMetrics : NSObject <_UIVisualStyleProviding>

@property (copy, nonatomic) id /* block */ defaultPreviewOutlineProvider;
@property (copy, nonatomic) id /* block */ playDropFeedback;
@property (nonatomic) struct CGSize { double width; double height; } previewMinimumSize;

- (id)init;
- (void).cxx_destruct;

@end
