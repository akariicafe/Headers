@class NSString;

@interface FeedbackCore.FBKUserCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (nonatomic, copy) NSString *itemIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)updateWithUser:(id)a0;

@end
