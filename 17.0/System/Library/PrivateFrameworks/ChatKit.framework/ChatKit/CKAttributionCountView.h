@class NSString, UILabel, NSArray;

@interface CKAttributionCountView : UICollectionReusableView

@property (class, readonly, nonatomic) NSString *reuseIdentifier;
@property (class, readonly, nonatomic) NSString *supplementaryViewKind;

@property (readonly, nonatomic) UILabel *labelView;
@property (retain, nonatomic) NSArray *textSizeContraints;
@property (nonatomic) long long count;

+ (struct CGSize { double x0; double x1; })preferredSizeForCount:(long long)a0;
+ (struct CGSize { double x0; double x1; })preferredSizeForCountString:(id)a0;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;

@end
