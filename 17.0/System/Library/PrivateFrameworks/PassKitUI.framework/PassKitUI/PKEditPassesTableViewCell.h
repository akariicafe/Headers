@class PKPass;

@interface PKEditPassesTableViewCell : UITableViewCell

@property (retain, nonatomic) PKPass *pass;
@property (nonatomic) BOOL showImage;

+ (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })separatorInset;
+ (double)height;
+ (struct CGSize { double x0; double x1; })imageSizeNeeded;
+ (BOOL)needsFullPassImage;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithReuseIdentifier:(id)a0 showImage:(BOOL)a1;
- (void)setImage:(id)a0 forPass:(id)a1;

@end
