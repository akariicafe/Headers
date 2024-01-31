@class NSString, UIImage, NSDate, UIListContentConfiguration;

@interface PKPassShareScheduleRowItem : NSObject <PKIdentifiable>

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) NSString *value;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSDate *date;
@property (retain, nonatomic) NSDate *maximumDate;
@property (retain, nonatomic) NSDate *minimumDate;
@property (retain, nonatomic) UIListContentConfiguration *configuration;
@property (nonatomic) BOOL hasToggle;
@property (nonatomic) BOOL hasTimePicker;
@property (nonatomic) BOOL hasDayPicker;
@property (nonatomic, getter=isSelectable) BOOL selectable;
@property (nonatomic) BOOL isOn;
@property (nonatomic) BOOL userInteractionEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 icon:(id)a1;
- (BOOL)isEqualToPassShareScheduleRowItem:(id)a0;

@end
