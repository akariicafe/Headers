@class NSString, WFIconComposePreviewView, WFGlyphPicker, WFColorPicker, UIView, WFWorkflow;

@interface WFIconComposeViewController : UIViewController <WFColorPickerDelegate, WFGlyphPickerDelegate, UINavigationControllerDelegate>

@property (weak, nonatomic) WFIconComposePreviewView *iconView;
@property (weak, nonatomic) WFColorPicker *colorPicker;
@property (weak, nonatomic) WFGlyphPicker *glyphPicker;
@property (weak, nonatomic) UIView *topSeperator;
@property (weak, nonatomic) UIView *bottomSeparator;
@property (retain, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void).cxx_destruct;
- (void)colorPicker:(id)a0 didSelectColor:(id)a1;
- (void)glyphPicker:(id)a0 didSelectGlyphWithCharacter:(unsigned short)a1;
- (void)pickedSegment:(id)a0;
- (void)saveIcon:(id)a0;
- (void)updateAccessibilityValue;

@end
