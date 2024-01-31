@class UILabel, SKUIImageView;

@interface SKUIProfileSettingDescriptionView : SKUISettingDescriptionView {
    UILabel *_handleLabel;
    BOOL _hasDisclosureChevron;
    SKUIImageView *_imageView;
    UILabel *_nameLabel;
}

+ (struct CGSize { double x0; double x1; })preferredSizeForSettingDescription:(id)a0 context:(id)a1;
+ (BOOL)prefetchResourcesForSettingDescription:(id)a0 reason:(long long)a1 context:(id)a2;
+ (void)requestLayoutForSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
+ (struct CGSize { double x0; double x1; })sizeThatFitsWidth:(double)a0 settingDescription:(id)a1 context:(id)a2;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (BOOL)hasDisclosureChevron;
- (void)reloadWithSettingDescription:(id)a0 width:(double)a1 context:(id)a2;
- (BOOL)setImage:(id)a0 forArtworkRequest:(id)a1 context:(id)a2;

@end
