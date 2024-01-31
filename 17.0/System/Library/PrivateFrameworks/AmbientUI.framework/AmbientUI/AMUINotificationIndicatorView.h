@class UILabel;

@interface AMUINotificationIndicatorView : UIView {
    UILabel *_notificationIndicatorLabel;
}

@property (nonatomic) unsigned long long notificationCount;
@property (nonatomic) BOOL hideNotificationCount;

- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)_attributedStringForNotificationCount:(unsigned long long)a0;
- (void)_configureNotificationIndicatorLabelIfNecessary;
- (id)_fontForNotificationIndicatorLabel;
- (id)_notificationIndicatorImage;
- (id)initWithNotificationCount:(unsigned long long)a0;

@end
