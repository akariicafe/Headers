@class NSArray, UILabel, NSString;

@interface ACUITextWithLinkButtonFooterView : UIView <PSHeaderFooterView> {
    NSArray *_linkButtons;
    UILabel *_textLabel;
    NSString *_footerText;
}

- (id)initWithSpecifier:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)a0;
- (double)_heightForEmptyLineConstrainedToWidth:(double)a0;
- (double)_heightForFooterTextConstrainedToWidth:(double)a0;
- (double)_heightForLinkButton:(id)a0 constrainedToWidth:(double)a1;
- (id)initWithText:(id)a0 linkButton:(id)a1;
- (id)initWithText:(id)a0 linkButtons:(id)a1;

@end
