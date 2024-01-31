@class NSString;

@interface FeedbackCore.FBKModalQuestionCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (class, nonatomic, copy) NSString *reuseIdentifier;

@property (nonatomic, retain) void /* unknown type, empty encoding */ question;
@property (nonatomic, copy) NSString *itemIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)initWithCoder:(id)a0;

@end
