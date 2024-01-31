@class UIMenu, NSString, UILabel, UIButton;

@interface CKDetailsSIMCell : CKDetailsCell <CKDetailsCell>

@property (readonly, nonatomic) UILabel *simLabel;
@property (retain, nonatomic) UIButton *button;
@property (copy, nonatomic) UIMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferredHeight;
+ (id)reuseIdentifier;
+ (BOOL)shouldHighlight;

- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 simLabelText:(id)a2;
- (void)setSIMLabelText:(id)a0;

@end
