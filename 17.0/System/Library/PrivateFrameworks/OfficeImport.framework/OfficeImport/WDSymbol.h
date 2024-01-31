@class WDFont;

@interface WDSymbol : WDRunWithCharacterProperties {
    WDFont *mFont;
    unsigned short mCharacter;
}

- (id)font;
- (id)description;
- (void).cxx_destruct;
- (void)setFont:(id)a0;
- (id)initWithParagraph:(id)a0;
- (unsigned short)character;
- (void)setCharacter:(unsigned short)a0;
- (int)runType;

@end
