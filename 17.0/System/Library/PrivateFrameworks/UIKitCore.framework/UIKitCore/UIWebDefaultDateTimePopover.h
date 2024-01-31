@class UIWebDateTimePopoverViewController;

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>

@property (retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController;

- (void)dealloc;
- (id)controlView;
- (void)clear:(id)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLInputElement:(id)a0 datePickerMode:(long long)a1;

@end
