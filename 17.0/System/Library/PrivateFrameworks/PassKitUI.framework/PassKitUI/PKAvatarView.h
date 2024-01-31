@class NSString, CNContact, UIImage, UIImageView, CNAvatarViewController, UILabel;

@interface PKAvatarView : UIView {
    CNAvatarViewController *_avatarViewController;
    UIImageView *_placeholderImageView;
    UILabel *_contactNameLabel;
}

@property (retain, nonatomic) CNContact *contact;
@property (retain, nonatomic) NSString *placeholderName;
@property (retain, nonatomic) UIImage *placeholderImage;
@property (nonatomic) double diameter;
@property (nonatomic) BOOL showsName;

- (id)descriptorForRequiredKeys;
- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_layoutWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isTemplate:(BOOL)a1;

@end
