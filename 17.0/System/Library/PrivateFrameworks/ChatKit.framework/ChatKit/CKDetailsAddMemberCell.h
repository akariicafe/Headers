@class UILabel;

@interface CKDetailsAddMemberCell : CKDetailsCell

@property (retain, nonatomic) UILabel *addLabel;

+ (Class)cellClass;
+ (double)preferredHeight;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;

@end
