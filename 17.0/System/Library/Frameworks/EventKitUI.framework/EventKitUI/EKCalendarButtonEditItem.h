@class NSString, UITableViewCell, UIView;

@interface EKCalendarButtonEditItem : EKCalendarEditItem {
    UITableViewCell *_cell;
    id _buttonTarget;
    SEL _buttonAction;
    NSString *_buttonTitle;
}

@property (readonly, nonatomic) UIView *buttonView;

- (id)cellForSubitemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)setButtonTitle:(id)a0;
- (void)calendarEditor:(id)a0 didSelectSubitem:(unsigned long long)a1;
- (void)setButtonTarget:(id)a0 action:(SEL)a1;

@end
