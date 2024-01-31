@class NSString, PREditorContentStylePalette;
@protocol PRPosterContentStyle;

@interface PREditorContentStylePickerConfiguration : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) PREditorContentStylePalette *stylePalette;
@property (nonatomic) BOOL showsSuggestedContentStyleItem;
@property (copy, nonatomic) id<PRPosterContentStyle> suggestedStyle;
@property (copy, nonatomic) id<PRPosterContentStyle> selectedStyle;
@property (nonatomic) unsigned long long colorWellDisplayMode;
@property (copy, nonatomic) NSString *prompt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 prompt:(id)a1 selectedStyle:(id)a2 stylePalette:(id)a3 colorWellDisplayMode:(unsigned long long)a4;

@end
