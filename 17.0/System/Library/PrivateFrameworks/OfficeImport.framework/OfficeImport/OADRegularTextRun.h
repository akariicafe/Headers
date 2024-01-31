@class NSMutableString;

@interface OADRegularTextRun : OADTextRun {
    NSMutableString *mText;
}

- (id)init;
- (void).cxx_destruct;
- (id)text;
- (unsigned long long)characterCount;
- (BOOL)isEmpty;
- (BOOL)isSimilarToTextRun:(id)a0;

@end
