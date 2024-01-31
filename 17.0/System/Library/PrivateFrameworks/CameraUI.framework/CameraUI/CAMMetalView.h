@class CAMetalLayer;
@protocol CAMMetalViewDelegate;

@interface CAMMetalView : UIView

@property (retain, nonatomic) id<CAMMetalViewDelegate> metalViewDelegate;
@property (readonly, nonatomic) CAMetalLayer *metalLayer;

+ (Class)layerClass;

- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
