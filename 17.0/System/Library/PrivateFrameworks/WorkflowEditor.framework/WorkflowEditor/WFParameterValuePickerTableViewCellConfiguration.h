@class UIColor, NSString, UIFont, WFImage, WFIcon, UIViewController;
@protocol WFParameterValuePickerTableViewCellDelegate;

@interface WFParameterValuePickerTableViewCellConfiguration : NSObject <UIContentConfiguration>

@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *secondaryText;
@property (copy, nonatomic) UIColor *textColor;
@property (copy, nonatomic) UIColor *secondaryTextColor;
@property (nonatomic, getter=isContainedInState) BOOL containedInState;
@property (nonatomic) BOOL usesToggleForSelection;
@property (retain, nonatomic) UIFont *textFont;
@property (retain, nonatomic) UIFont *secondaryTextFont;
@property (retain, nonatomic) WFImage *image;
@property (retain, nonatomic) WFIcon *icon;
@property (nonatomic) double cornerRadius;
@property (nonatomic) BOOL forceImageScaling;
@property (nonatomic) BOOL usesInsetGroupedTableStyle;
@property (nonatomic) BOOL disablesSeparatorIconInset;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (weak, nonatomic) id<WFParameterValuePickerTableViewCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)updatedConfigurationForState:(id)a0;
- (id)makeContentView;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
