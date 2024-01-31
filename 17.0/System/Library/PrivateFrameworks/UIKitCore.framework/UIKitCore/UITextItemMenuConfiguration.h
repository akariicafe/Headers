@class UITextItemMenuPreview, UIMenu;

@interface UITextItemMenuConfiguration : NSObject

@property (readonly, nonatomic) UIMenu *menu;
@property (readonly, nonatomic) UITextItemMenuPreview *preview;

+ (id)configurationWithMenu:(id)a0;
+ (id)configurationWithPreview:(id)a0 menu:(id)a1;

- (void).cxx_destruct;
- (id)_initWithPreview:(id)a0 menu:(id)a1;

@end
