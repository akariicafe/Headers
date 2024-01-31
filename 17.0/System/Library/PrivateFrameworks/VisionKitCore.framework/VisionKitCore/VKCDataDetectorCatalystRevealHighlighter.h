@class VKCDataDetectorElementView;
@protocol VKCDataDetectorCatalystRevealHighlighterDelegate;

@interface VKCDataDetectorCatalystRevealHighlighter : NSObject

@property (nonatomic) BOOL highlighting;
@property (weak, nonatomic) id<VKCDataDetectorCatalystRevealHighlighterDelegate> delegate;
@property (weak, nonatomic) VKCDataDetectorElementView *elementView;

- (void).cxx_destruct;

@end
