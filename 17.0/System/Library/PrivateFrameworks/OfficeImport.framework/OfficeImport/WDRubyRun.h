@class WDCharacterRun, WDRubyProperties;

@interface WDRubyRun : WDCharacterRun {
    WDCharacterRun *mPhoneticRun;
    WDRubyProperties *mRubyProperties;
}

- (id)description;
- (void).cxx_destruct;
- (id)initWithParagraph:(id)a0;
- (int)runType;
- (void)appendPhoneticRunString:(id)a0;
- (id)phoneticRun;
- (id)phoneticRunString;
- (id)rubyBase;
- (id)rubyProperties;
- (void)setPhoneticRunString:(id)a0;

@end
