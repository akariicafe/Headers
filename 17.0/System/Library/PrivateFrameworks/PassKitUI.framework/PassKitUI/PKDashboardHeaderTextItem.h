@class UIColor, NSString, UIImage, UIMenu;

@interface PKDashboardHeaderTextItem : NSObject <PKDashboardItem>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) UIColor *titleColor;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) UIImage *actionImage;
@property (copy, nonatomic) UIColor *actionColor;
@property (nonatomic) unsigned long long actionStyle;
@property (copy, nonatomic) id /* block */ action;
@property (copy, nonatomic) UIMenu *menu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (id)itemWithHeaderText:(id)a0;

- (void).cxx_destruct;

@end
