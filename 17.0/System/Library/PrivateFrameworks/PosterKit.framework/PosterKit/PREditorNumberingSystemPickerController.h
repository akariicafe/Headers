@class NSString, UIFont, NSLocale;
@protocol PREditorNumberingSystemPickerControllerDelegate;

@interface PREditorNumberingSystemPickerController : NSObject

@property (retain, nonatomic) UIFont *font;
@property (readonly, copy, nonatomic) NSString *selectedNumberingSystem;
@property (weak, nonatomic) id<PREditorNumberingSystemPickerControllerDelegate> delegate;
@property (readonly, copy, nonatomic) NSLocale *displayLocale;

+ (id)systemNumberingSystem;
+ (id)allNumberingSystems;
+ (id)displayFontForFont:(id)a0;
+ (id)displayNameForNumberingSystem:(id)a0;
+ (id)imageForNumberingSystem:(id)a0;

- (void).cxx_destruct;
- (id)menu;
- (void)didSelectNumberingSystem:(id)a0;
- (id)initWithSelectedNumberingSystem:(id)a0 selectedFont:(id)a1;

@end
