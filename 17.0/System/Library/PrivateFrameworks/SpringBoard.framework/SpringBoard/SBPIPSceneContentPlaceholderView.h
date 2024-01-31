@class NSString, UIImageView;

@interface SBPIPSceneContentPlaceholderView : UIView <SBScenePlaceholderContentView> {
    UIImageView *_imageView;
}

@property (nonatomic) long long containerOrientation;
@property (nonatomic) long long statusBarStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImage:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
