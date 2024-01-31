@class NSString, NSCharacterSet;

@interface NSConcreteScanner : NSScanner {
    NSString *scanString;
    NSCharacterSet *skipSet;
    NSCharacterSet *invertedSkipSet;
    id locale;
    unsigned long long scanLocation;
    struct { unsigned char caseSensitive : 1; unsigned int  : 31; } flags;
}

- (void)dealloc;
- (unsigned long long)scanLocation;
- (void)setLocale:(id)a0;
- (BOOL)caseSensitive;
- (void)setCaseSensitive:(BOOL)a0;
- (id)locale;
- (BOOL)scanInt:(int *)a0;
- (id)string;
- (BOOL)scanLongLong:(long long *)a0;
- (id)charactersToBeSkipped;
- (id)initWithString:(id)a0;
- (id)_invertedSkipSet;
- (void)setCharactersToBeSkipped:(id)a0;
- (void)setScanLocation:(unsigned long long)a0;

@end
