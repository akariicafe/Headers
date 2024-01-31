@class NSString, FBKQuestion;

@interface FBKInformationCell : UITableViewCell <FBKDiffableCell>

@property (retain, nonatomic) FBKQuestion *question;
@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;

@end
