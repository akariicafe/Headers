@class UITextView, RTTServiceUpdate;
@protocol RTTUIServiceCellDelegate;

@interface RTTUIServiceUpdateCell : UITableViewCell {
    UITextView *_titleView;
    UITextView *_subtitleView;
    RTTServiceUpdate *_serviceUpdate;
}

@property (weak, nonatomic) id<RTTUIServiceCellDelegate> delegate;

+ (double)heightForWidth:(double)a0 delegate:(id)a1 serviceUpdate:(id)a2;

- (id)accessibilityLabel;
- (void)updateLayout;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (double)preferredHeightForWidth:(double)a0;
- (id)serviceMessage;
- (void)adjustTextViewSize;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 serviceUpdate:(id)a2;
- (id)serviceTitle;

@end
