@class NSArray, NSString;

@interface WBSReaderFontManager : NSObject {
    NSArray *_validatedFonts;
}

@property (readonly) NSArray *fonts;
@property (readonly) NSArray *possibleFonts;
@property (readonly, copy) NSString *languageTag;

- (id)init;
- (void)_fontDownloadDidFinish:(id)a0;
- (id)fontWithFontFamilyName:(id)a0;
- (id)defaultFontForLanguageTag:(id)a0;
- (void)updateLanguageTag:(id)a0;
- (void).cxx_destruct;

@end
