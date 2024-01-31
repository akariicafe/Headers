@class NSTimeZone;

@interface ASTimeZone : NSTimeZone <ASParsingLeafNode> {
    int _gmtOffset;
    int _dstOffset;
    struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; } *_standardDate;
    struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; } *_daylightDate;
    NSTimeZone *_wrappedTimeZone;
}

+ (id)gmt;
+ (BOOL)parsingLeafNode;
+ (void)_cacheTimeZoneInfo;
+ (id)_curTZDataVersion;
+ (BOOL)_dateIsValidTransitionDate:(id)a0 inYear:(int)a1 withTimeZone:(id)a2;
+ (void)_fillOutCurrentTimeZoneInfo;
+ (id)_tzCachePathCreateIfMissing:(BOOL)a0;
+ (BOOL)acceptsTopLevelLeaves;
+ (BOOL)expectsContent;
+ (BOOL)frontingBasicTypes;
+ (BOOL)notifyOfUnknownTokens;
+ (BOOL)parsingWithSubItems;

- (long long)secondsFromGMTForDate:(id)a0;
- (void)dealloc;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)data;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;
- (id)initWithName:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)description;
- (int)parsingState;
- (void).cxx_destruct;
- (id)name;
- (id)_bestGuessAtOlsonTimeZoneForOffsetInMinutes:(int)a0 daylightBiasInMinutes:(int)a1 standardTransitionDate:(struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; } *)a2 daylightTransitionDate:(struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; } *)a3;
- (BOOL)_dateIsValidTransitionDate:(id)a0 inYear:(long long)a1 outDaylightBias:(long long *)a2;
- (struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; })_ruleForDate:(id)a0;
- (id)dateForRule:(struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; } *)a0 inYear:(long long)a1;
- (id)dictForCoding;
- (id)initWithASParseContext:(id)a0 root:(id)a1 parent:(id)a2 callbackDict:(id)a3 streamCallbackDict:(id)a4 lengthUntilEndOfTerminator:(int)a5;
- (id)initWithCodingDict:(id)a0;
- (id)initWithTZNameFromCalDB:(id)a0;
- (struct { int x0; unsigned short x1[32]; struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; } x2; int x3; unsigned short x4[32]; struct _SYSTEMTIME { short x0; short x1; short x2; short x3; short x4; short x5; short x6; short x7; } x5; int x6; } *)mallocTZIForDate:(id)a0;

@end
