@class UILabel, UISwitch, NSString;

@interface CKDetailsSharedWithYouCheckboxCell : CKTranscriptDetailsResizableCell <CKDetailsCell>

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UISwitch *controlSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_configureNewControlSwitch;
- (void)_configureNewTitleLabel;

@end
