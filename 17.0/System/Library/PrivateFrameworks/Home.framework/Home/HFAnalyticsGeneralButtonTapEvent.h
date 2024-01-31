@class NSString;

@interface HFAnalyticsGeneralButtonTapEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSString *processName;
@property (retain, nonatomic) NSString *sourceViewControllerClassName;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
