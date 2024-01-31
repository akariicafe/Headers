@class NSString, NSArray;

@interface PRSentenceCorrection : NSObject {
    int _category;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    NSString *_word;
    NSArray *_corrections;
}

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (int)category;
- (void)dealloc;
- (id)description;
- (id)corrections;
- (id)word;
- (id)initWithCategory:(int)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 word:(id)a2 corrections:(id)a3;
- (BOOL)presentAsAutocorrection;
- (BOOL)presentAsGrammarError;
- (BOOL)presentAsSpellingError;

@end
