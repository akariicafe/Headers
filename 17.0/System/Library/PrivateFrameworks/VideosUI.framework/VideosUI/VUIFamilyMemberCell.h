@class VUIFamilyMember, NSString, TVImageLayout, VUILabel, _TVMonogramView, VUISeparatorView, _TVImageView, VUIVideosImageView;

@interface VUIFamilyMemberCell : VUIListCollectionViewCell <VUIFamilyMemberDelegate>

@property (retain, nonatomic) _TVImageView *familyMemberImageView;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } monogramSize;
@property (retain, nonatomic) VUIVideosImageView *chevronImageView;
@property (retain, nonatomic) VUISeparatorView *bottomSeparatorView;
@property (retain, nonatomic) VUIFamilyMember *familyMember;
@property (retain, nonatomic) VUILabel *nameLabel;
@property (retain, nonatomic) TVImageLayout *monogramImageLayout;
@property (retain, nonatomic) _TVMonogramView *monogramView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_monogramViewForFamilyMemberCell:(id)a0;
+ (void)configureVUIFamilyMemberCell:(id)a0 withFamilyMember:(id)a1 metricsOnly:(BOOL)a2;
+ (double)maxMonogramHeight;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })_iOS_layoutSubviewsWithSize:(struct CGSize { double x0; double x1; })a0 computationOnly:(BOOL)a1;
- (void)configureMonogramImageLayoutForWindowWidth:(double)a0;
- (void)familyMember:(id)a0 photoRequestDidCompleteWithImage:(id)a1;

@end
