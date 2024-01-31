@class NSExtension;

@interface UIKeyboardExtensionInputMode : UIKeyboardInputMode

@property (retain, nonatomic) NSExtension *extension;

- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)setPrimaryLanguage:(id)a0;
- (id)displayName;
- (BOOL)showSWLayoutWithHWKeyboard;
- (id)containingBundle;
- (id)_indicatorIconWithBackground:(BOOL)a0 iconWidth:(double)a1 scaleFactor:(double)a2;
- (id)containingBundleDisplayName;
- (BOOL)defaultLayoutIsASCIICapable;
- (id)extendedDisplayName;
- (id)hardwareLayout;
- (id)identifierWithLayouts;
- (BOOL)isAllowedForTraits:(id)a0;
- (BOOL)isDefaultRightToLeft;
- (BOOL)isDesiredForTraits:(id)a0;
- (BOOL)isExtensionInputMode;
- (BOOL)isStalledExtensionInputMode;
- (id)normalizedIdentifierLevels;

@end
