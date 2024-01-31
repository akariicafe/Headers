@class NSString, UIButtonConfiguration;

@interface PUPhotoEditToolActivationButton : PXUIButton

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *unselectedGlyphName;
@property (retain, nonatomic) NSString *selectedGlyphName;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UIButtonConfiguration *overrideButtonConfiguration;
@property (readonly, nonatomic) UIButtonConfiguration *selectedConfiguration;
@property (readonly, nonatomic) UIButtonConfiguration *unselectedConfiguration;
@property (copy, nonatomic) id /* block */ isSelectedBlock;

+ (id)buttonWithTitle:(id)a0;

- (void)updateConfiguration;
- (void).cxx_destruct;
- (id)baseConfiguration;
- (void)buttonTouchUpAction:(id)a0;
- (id)imageConfigurationForSelectedState:(BOOL)a0;

@end
