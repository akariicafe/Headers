@class NSMutableDictionary, UIImage, SLHighlight, NSAttributedString;

@interface PXContentSyndicationGadgetViewModel : PXObservable {
    NSMutableDictionary *_keyImages;
}

@property (readonly, copy, nonatomic) NSAttributedString *overlayTitle;
@property (readonly, nonatomic) long long keyImageCount;
@property (readonly, copy, nonatomic) UIImage *avatarImage;
@property (readonly, nonatomic) SLHighlight *socialLayerHighlight;

- (void)performChanges:(id /* block */)a0;
- (void).cxx_destruct;
- (void)setAvatarImage:(id)a0;
- (id)keyImageAtIndex:(long long)a0;
- (void)setKeyImage:(id)a0 atIndex:(long long)a1;
- (void)setKeyImageCount:(long long)a0;
- (void)setOverlayTitle:(id)a0;
- (void)setSocialLayerHighlight:(id)a0;

@end
