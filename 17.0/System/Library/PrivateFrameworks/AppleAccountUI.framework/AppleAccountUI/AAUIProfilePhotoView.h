@class UIImage, UIImageView, UIButton;

@interface AAUIProfilePhotoView : UIView {
    UIImageView *_photoView;
    UIButton *_editButton;
}

@property (retain, nonatomic) UIImage *photo;
@property (nonatomic, setter=setEditing:) BOOL isEditing;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)desiredHeightForWidth:(double)a0;
- (id)initWithPhoto:(id)a0 target:(id)a1 action:(SEL)a2;

@end
