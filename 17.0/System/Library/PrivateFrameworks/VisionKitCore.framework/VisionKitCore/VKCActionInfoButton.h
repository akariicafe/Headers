@class UIImageSymbolConfiguration, NSArray, NSString, UIImage, VKCBaseDataDetectorElement, DDUIAction, UIMenu;
@protocol VKCActionInfoButtonDelegate;

@interface VKCActionInfoButton : UIButton

@property (retain, nonatomic) VKCBaseDataDetectorElement *representedElement;
@property (retain, nonatomic) NSArray *allUnfilteredElements;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) UIImage *menuImage;
@property (weak, nonatomic) id<VKCActionInfoButtonDelegate> delegate;
@property (retain, nonatomic) DDUIAction *defaultAction;
@property (retain, nonatomic) UIMenu *customMenu;
@property (nonatomic) BOOL isMoreButton;
@property (retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration;

+ (id)buttonWithImage:(id)a0 text:(id)a1;

- (void)_vk_performAction;
- (void)tearDown;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (void)contextMenuInteraction:(id)a0 willDisplayMenuForConfiguration:(id)a1 animator:(id)a2;
- (id)filledButtonConfiguration;
- (long long)overrideUserInterfaceStyle;
- (id)translucentButtonConfiguration;
- (void)performDefaultElementAction;
- (id)defaultSymbolConfigurationForImage;
- (BOOL)hasAction:(SEL)a0;
- (id /* block */)buttonConfigurationTextAttributesTransformer;
- (void).cxx_destruct;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (id)translucentSelectedButtonConfiguration;
- (id)dataDetectorContext;
- (void)vk_addTarget:(id)a0 action:(SEL)a1;

@end
