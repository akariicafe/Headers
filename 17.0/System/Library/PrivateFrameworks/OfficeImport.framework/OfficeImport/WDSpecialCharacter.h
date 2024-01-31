@interface WDSpecialCharacter : WDRunWithCharacterProperties {
    int mType;
}

- (id)description;
- (id)initWithParagraph:(id)a0;
- (int)characterType;
- (int)runType;
- (void)setCharacterType:(int)a0;

@end
