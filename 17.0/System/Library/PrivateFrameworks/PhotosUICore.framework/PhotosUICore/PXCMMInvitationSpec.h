@class UIColor, UIFont;

@interface PXCMMInvitationSpec : NSObject

@property (readonly, nonatomic) long long layoutVariant;
@property (readonly, nonatomic) double aspectRatio;
@property (readonly, nonatomic) double cornerRadius;
@property (readonly, nonatomic) double insets;
@property (readonly, nonatomic) double verticalPadding;
@property (readonly, nonatomic) double bulletSize;
@property (readonly, nonatomic) double titleSpacing;
@property (readonly, nonatomic) double subtitleSpacing;
@property (readonly, nonatomic) UIFont *posterTitleFont;
@property (readonly, nonatomic) UIFont *titleFont;
@property (readonly, nonatomic) UIFont *titleEmphasizedFont;
@property (readonly, nonatomic) UIFont *subtitle1Font;
@property (readonly, nonatomic) UIFont *subtitle2Font;
@property (readonly, nonatomic) long long posterTitleTextStyle;
@property (readonly, nonatomic) long long titleTextStyle;
@property (readonly, nonatomic) long long subtitle1TextStyle;
@property (readonly, nonatomic) long long subtitle2TextStyle;
@property (readonly, nonatomic) UIColor *posterTitleColor;
@property (readonly, nonatomic) UIColor *titleColor;
@property (readonly, nonatomic) UIColor *titleBulletColor;
@property (readonly, nonatomic) UIColor *subtitle1Color;
@property (readonly, nonatomic) UIColor *subtitle2Color;

+ (id)specForLayoutVariant:(long long)a0;

- (id)init;
- (id)_initWithLayoutVariant:(long long)a0;

@end
