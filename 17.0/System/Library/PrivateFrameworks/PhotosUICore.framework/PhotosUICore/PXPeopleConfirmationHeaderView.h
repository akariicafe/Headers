@class UILabel, NSString;
@protocol PXPerson;

@interface PXPeopleConfirmationHeaderView : UICollectionReusableView

@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *title;

+ (id)_titleFont;
+ (struct CGSize { double x0; double x1; })_sizeForString:(id)a0 width:(double)a1 multiline:(BOOL)a2 font:(id)a3;
+ (struct CGSize { double x0; double x1; })sizeForTitle:(id)a0 boundingSize:(struct CGSize { double x0; double x1; })a1;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_setupHeader;

@end
