@protocol PKFamilyMemberRowModel;

@interface PKFamilyMemberTableViewCell : UITableViewCell

@property (retain, nonatomic) id<PKFamilyMemberRowModel> rowModel;

- (void)prepareForReuse;
- (void).cxx_destruct;

@end
