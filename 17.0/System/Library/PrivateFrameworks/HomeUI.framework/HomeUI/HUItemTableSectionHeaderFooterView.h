@class NSArray, UILabel, HUTappableTextView;
@protocol HFStringGenerator;

@interface HUItemTableSectionHeaderFooterView : UITableViewHeaderFooterView

@property (retain, nonatomic) HUTappableTextView *messageTextView;
@property (retain, nonatomic) NSArray *constraints;
@property (copy, nonatomic) id<HFStringGenerator> message;
@property (nonatomic) unsigned long long type;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } indentationInset;
@property (readonly, nonatomic) UILabel *textLabel;
@property (readonly, nonatomic) UILabel *detailTextLabel;

+ (BOOL)requiresConstraintBasedLayout;
+ (id)defaultAttributesForType:(unsigned long long)a0;

- (id)textLabel;
- (void)prepareForReuse;
- (void)updateConstraints;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)a0;
- (id)detailTextLabel;
- (BOOL)_updateViewContent;
- (id)initWithReuseIdentifier:(id)a0 type:(unsigned long long)a1;

@end
