@class UIImageView, _WKActivatedElementInfo;
@protocol BCSAction;

@interface _SFQRImagePreviewViewController : UIViewController {
    UIImageView *_imageView;
    _WKActivatedElementInfo *_activatedElementInfo;
}

@property (readonly, nonatomic) id<BCSAction> action;

- (void)loadView;
- (void).cxx_destruct;
- (id)_contentViewSubtitleWithAction:(id)a0;
- (id)initWithElementInfo:(id)a0;

@end
