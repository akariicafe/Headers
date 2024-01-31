@class NSString, UIImage;

@interface VideosUI.TabItemCollectionViewCell : UICollectionViewCell {
    void /* unknown type, empty encoding */ cardItemLayout;
    void /* unknown type, empty encoding */ numberOfTabs;
    void /* unknown type, empty encoding */ debugName;
    void /* unknown type, empty encoding */ titleView;
    void /* unknown type, empty encoding */ imageView;
}

@property (nonatomic, copy) NSString *largeContentTitle;
@property (nonatomic, retain) UIImage *largeContentImage;
@property (nonatomic) BOOL scalesLargeContentImage;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithCoder:(id)a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
