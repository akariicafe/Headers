@class PRPosterColor, NSString, NSArray, UIView, PREditorColorPalette;
@protocol UIPopoverPresentationControllerSourceItem;

@interface PREditorColorPickerConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long context;
@property (readonly) BOOL includesObjectsOfTypePRPickerColor;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PREditorColorPalette *colorPalette;
@property (nonatomic) BOOL showsSuggestedColorItem;
@property (copy, nonatomic) PRPosterColor *suggestedColor;
@property (copy, nonatomic) NSArray *suggestedColors;
@property (copy, nonatomic) id selectedColor;
@property (nonatomic) BOOL showsSlider;
@property (nonatomic) unsigned long long colorWellDisplayMode;
@property (copy, nonatomic) NSString *prompt;
@property (retain, nonatomic) UIView *colorPickerSourceView;
@property (retain, nonatomic) id<UIPopoverPresentationControllerSourceItem> colorPickerSourceItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)didUpdateColors;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 prompt:(id)a1 selectedColor:(id)a2 suggestedColors:(id)a3 colorPalette:(id)a4 colorWellDisplayMode:(unsigned long long)a5 showsSlider:(BOOL)a6 context:(unsigned long long)a7;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
