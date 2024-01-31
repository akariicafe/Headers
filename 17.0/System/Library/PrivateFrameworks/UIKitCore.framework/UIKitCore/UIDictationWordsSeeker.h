@class NSArray, NSString;

@interface UIDictationWordsSeeker : NSObject

@property (retain, nonatomic) NSArray *targetStringWords;
@property (retain, nonatomic) NSArray *targetSubstringWords;
@property (retain, nonatomic) NSString *targetString;
@property (retain, nonatomic) NSString *targetSubstring;
@property (nonatomic) BOOL reverse;

+ (BOOL)_isSubstringArray:(id)a0 equalToSubstringArray:(id)a1;
+ (id)_prepareAllWordsWithString:(id)a0 reverse:(BOOL)a1;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_search;
- (id)initWithString:(id)a0 substring:(id)a1 reverse:(BOOL)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfSubstring:(id)a0 fullString:(id)a1 reverse:(BOOL)a2;
- (BOOL)validateWordBoundariesInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;

@end
