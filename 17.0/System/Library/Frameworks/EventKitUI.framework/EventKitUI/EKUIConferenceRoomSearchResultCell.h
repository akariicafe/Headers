@class NSString, UIImageView, UIActivityIndicatorView, UILabel;

@interface EKUIConferenceRoomSearchResultCell : UITableViewCell {
    UILabel *_title;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
    NSString *_accessibilityLabel;
}

- (id)description;
- (void).cxx_destruct;
- (void)safeAreaInsetsDidChange;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)reloadWithConferenceRoom:(id)a0;
- (void)updateSeparatorInset;

@end
