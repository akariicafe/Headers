@class UIColor;

@interface MUGroupedActionsRowViewConfiguration : NSObject

@property (retain, nonatomic) UIColor *tintColor;
@property (nonatomic) BOOL useVibrancy;
@property (nonatomic) long long style;
@property (retain, nonatomic) UIColor *itemBackgroundColor;
@property (retain, nonatomic) UIColor *itemHighlightColor;

+ (id)defaultConfiguration;

- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 useVibrancy:(BOOL)a1;

@end
