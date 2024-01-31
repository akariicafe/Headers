@class UILabel, NSString;

@interface RUIModernHeaderView : OBHeaderView <RUIHeader>

@property (retain, nonatomic) UILabel *headerLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *subHeaderText;
@property (nonatomic) double iconHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)topPadding;
- (id)initWithTitle:(id)a0;
- (id)initWithAttributes:(id)a0;
- (void)setIconImage:(id)a0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })a0;
- (void).cxx_destruct;
- (double)bottomPadding;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (double)iconToHeaderLabelPadding;
- (double)headerHeightForWidth:(double)a0 inView:(id)a1;
- (void)setDetailText:(id)a0 attributes:(id)a1;
- (void)setSubHeaderText:(id)a0 attributes:(id)a1;
- (void)setText:(id)a0 attributes:(id)a1;
- (void)updateDetailText;

@end
