@class NSString;

@interface FBKDiffableTableViewCell : UITableViewCell <FBKDiffableCell>

@property (retain, nonatomic) NSString *itemIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)configureForTeam:(id)a0 disclosesMoreTeams:(BOOL)a1;

@end
