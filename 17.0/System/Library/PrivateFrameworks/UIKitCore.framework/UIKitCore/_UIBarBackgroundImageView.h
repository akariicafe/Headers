@class UIImageView, UIView;

@interface _UIBarBackgroundImageView : UIImageView {
    UIView *_topStripView;
    UIImageView *_customImageContainer;
}

@property (nonatomic, getter=isTranslucent) BOOL translucent;

- (void)updateTopStripViewCreateIfNecessary;
- (id)image;
- (id)topStripView;
- (void)removeTopStripView;
- (void).cxx_destruct;
- (void)setImage:(id)a0;

@end
