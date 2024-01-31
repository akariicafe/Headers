@class NSString;

@interface FeedbackCore.FBKDateTimeCell : UITableViewCell <FBKDiffableCell> {
    void /* unknown type, empty encoding */ itemIdentifier;
}

@property (nonatomic, copy) NSString *itemIdentifier;
@property (nonatomic, weak) void /* unknown type, empty encoding */ questionLabel;
@property (nonatomic, weak) void /* unknown type, empty encoding */ datePicker;
@property (nonatomic, weak) void /* unknown type, empty encoding */ editorDelegate;
@property (nonatomic, retain) void /* unknown type, empty encoding */ question;
@property (nonatomic, retain) void /* unknown type, empty encoding */ answer;

+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)awakeFromNib;
- (id)initWithCoder:(id)a0;
- (void)dateDidChange:(id)a0;

@end
