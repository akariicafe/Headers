@class NSString;

@interface ChatKit.CKTipCollectionViewCell : UICollectionViewCell

@property (class, nonatomic, readonly) NSString *reuseIdentifier;

@property (nonatomic, retain) void /* unknown type, empty encoding */ miniTipUIView;
@property (nonatomic, readonly) NSString *reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)setTipHostingView:(id)a0;

@end
