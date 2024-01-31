@class NSString;

@interface WDFormField : WDRun {
    unsigned int mPosition;
    BOOL mLinkAbsolute;
    BOOL mLinkSpecifyingNamedLocation;
    NSString *mNamedLocation;
    NSString *mURI;
    NSString *mMacName;
    NSString *mDosName;
}

- (void)setPosition:(unsigned int)a0;
- (void)setURI:(id)a0;
- (unsigned int)position;
- (id)URI;
- (id)description;
- (void).cxx_destruct;
- (id)initWithParagraph:(id)a0;
- (void)setNamedLocation:(id)a0;
- (id)namedLocation;
- (id)dosName;
- (id)macName;
- (void)setLinkSpecifyingNamedLocation:(BOOL)a0;
- (int)runType;
- (BOOL)linkAbsolute;
- (BOOL)linkSpecifyingNamedLocation;
- (void)setDosName:(id)a0;
- (void)setLinkAbsolute:(BOOL)a0;
- (void)setMacName:(id)a0;

@end
