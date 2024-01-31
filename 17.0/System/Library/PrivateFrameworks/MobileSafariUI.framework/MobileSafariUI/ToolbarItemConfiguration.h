@class NSString, NSAttributedString, UIImage;

@interface ToolbarItemConfiguration : NSObject {
    id _title;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attributedTitle;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) NSString *accessibilityIdentifier;
@property (nonatomic) BOOL showsIndicator;
@property (nonatomic, getter=isEmphasized) BOOL emphasized;

+ (id)configurationForProfile:(id)a0;
+ (id)configurationForTabGroup:(id)a0;
+ (id)configurationForTabGroup:(id)a0 inProfile:(id)a1;
+ (id)configurationForTabGroupPicker;

- (id)init;
- (void).cxx_destruct;
- (id)buttonConfigurationWithStyle:(long long)a0;

@end
