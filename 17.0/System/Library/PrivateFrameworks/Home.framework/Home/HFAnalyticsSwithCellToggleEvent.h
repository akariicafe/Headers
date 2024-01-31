@class NSString, NSNumber;

@interface HFAnalyticsSwithCellToggleEvent : HFAnalyticsEvent

@property (retain, nonatomic) NSString *itemClassName;
@property (retain, nonatomic) NSString *sourceViewControllerClassName;
@property (retain, nonatomic) NSString *toggleTitle;
@property (retain, nonatomic) NSNumber *isOn;
@property (retain, nonatomic) NSString *processName;

- (id)payload;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;

@end
