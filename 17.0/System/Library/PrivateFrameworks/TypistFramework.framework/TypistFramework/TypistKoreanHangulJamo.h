@interface TypistKoreanHangulJamo : NSObject {
    unsigned short _jamo;
    int _hangulJamoPosition;
    BOOL _isConsonantVariant;
    BOOL _isVerticalVowel;
}

+ (id)leadingConsonants;
+ (id)trailingConsonants;
+ (id)vowels;

- (id)description;
- (BOOL)isVerticalVowel;
- (int)_getJamoType:(unsigned short)a0 withOrderInSyllable:(unsigned long long)a1;
- (BOOL)_isConsonantVariant:(unsigned short)a0;
- (BOOL)_isVerticalVowel:(unsigned short)a0;
- (int)hangulJamoPosition;
- (id)initWithJamo:(unsigned short)a0 position:(unsigned long long)a1;
- (BOOL)isConsonantVariant;
- (unsigned short)jamo;

@end
