@class NSString, NSCharacterSet;

@interface MACFormatter : APFormatter {
    NSCharacterSet *_possibleSeparators;
    NSCharacterSet *_possibleSeparatorsInvertedSet;
    NSString *_userPreferredSeparator;
}

+ (id)macAddressSet;
+ (id)macFormatter;
+ (BOOL)parseMACAddress:(const char *)a0 intoHexString:(char *)a1;
+ (id)sharedMACFormatter;

- (id)init;
- (void)dealloc;
- (BOOL)isPartialStringValid:(id *)a0 proposedSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a1 originalString:(id)a2 originalSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 errorDescription:(id *)a4;
- (id)possibleSeparators;
- (id)possibleSeparatorsInvertedSet;
- (void)removeMACAddressSeparatorsFromString:(id)a0;
- (void)setPossibleSeparators:(id)a0;
- (void)setPossibleSeparatorsInvertedSet:(id)a0;
- (void)setUserPreferredSeparator:(id)a0;
- (id)userPreferredSeparator;

@end
