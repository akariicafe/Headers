@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
    NSString *mText;
    OADParagraphProperties *mParagraphProperties;
}

- (id)init;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (id)text;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (id)paragraphProperties;
- (void)removeUnnecessaryOverrides;

@end
