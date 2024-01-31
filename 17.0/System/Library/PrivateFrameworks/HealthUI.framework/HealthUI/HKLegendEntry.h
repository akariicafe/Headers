@class NSString, UIColor, UIImage;

@interface HKLegendEntry : NSObject

@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *dotColor;
@property (retain, nonatomic) UIColor *innerDotColor;
@property (retain, nonatomic) UIColor *labelColor;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIColor *iconTint;

+ (id)legendEntryWithTitle:(id)a0 dotColor:(id)a1 innerDotColor:(id)a2;
+ (id)legendEntryWithTitle:(id)a0 icon:(id)a1 iconTint:(id)a2;
+ (id)legendEntryWithTitle:(id)a0 labelColor:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithTitle:(id)a0 dotColor:(id)a1 innerDotColor:(id)a2 labelColor:(id)a3 icon:(id)a4 iconTint:(id)a5;

@end
