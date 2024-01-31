@class NSString, NSArray;

@interface PREditorContentStylePalette : NSObject <BSDescriptionStreamable, BSXPCSecureCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *role;
@property (readonly, copy) NSString *localizedName;
@property (readonly) NSArray *styles;
@property (readonly) unsigned long long context;
@property (readonly, getter=isDefaultPalette) BOOL defaultPalette;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)standardPaletteColors;
+ (BOOL)supportsBSXPCSecureCoding;
+ (id)additionalColorsForExtendedPalette;
+ (id)defaultPaletteForContext:(unsigned long long)a0 role:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithContentStyles:(id)a0 context:(unsigned long long)a1 role:(id)a2 localizedName:(id)a3 defaultPalette:(BOOL)a4;
- (id)initWithContentStyles:(id)a0 localizedName:(id)a1;

@end
