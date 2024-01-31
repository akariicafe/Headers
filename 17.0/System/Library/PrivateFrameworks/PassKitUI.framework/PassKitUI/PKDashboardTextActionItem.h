@class UIImage, NSString, UIColor;

@interface PKDashboardTextActionItem : NSObject <PKDashboardItem>

@property (retain, nonatomic) UIImage *icon;
@property (nonatomic) long long actionStyle;
@property (nonatomic) long long layoutStyle;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIImage *titleImage;
@property (retain, nonatomic) UIColor *titleColor;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIImage *subtitleImage;
@property (retain, nonatomic) UIColor *subtitleColor;
@property (retain, nonatomic) UIImage *accessoryImage;
@property (retain, nonatomic) UIColor *accessoryColor;
@property (copy, nonatomic) id /* block */ action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)identifier;
+ (id)colorForSemanticColor:(long long)a0 hasTintColor:(BOOL *)a1;
+ (id)imageForPassFieldImage:(id)a0 hasTintColor:(BOOL)a1;

- (void).cxx_destruct;

@end
