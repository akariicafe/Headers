@class NSMutableString;

@interface WDCharacterRun : WDRunWithCharacterProperties {
    NSMutableString *mString;
    BOOL mBinaryWriterContentFlag;
}

- (void)setString:(id)a0;
- (void)appendString:(id)a0;
- (id)string;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEmpty;
- (id)initWithParagraph:(id)a0;
- (void)copyPropertiesFrom:(id)a0;
- (int)runType;
- (BOOL)binaryWriterContentFlag;
- (void)clearString;
- (id)initWithParagraph:(id)a0 string:(id)a1;
- (void)removeLastCharacter:(unsigned short)a0;
- (void)setBinaryWriterContentFlag:(BOOL)a0;
- (void)setPropertiesForDocument;

@end
