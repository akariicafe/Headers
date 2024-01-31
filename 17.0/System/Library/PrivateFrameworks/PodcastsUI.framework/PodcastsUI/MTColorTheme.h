@class UIColor;

@interface MTColorTheme : NSObject

@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) UIColor *primaryTextColor;
@property (retain, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic) BOOL isBackgroundLight;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isBackgroundDark;

@end
