@interface DDURLifier : NSObject

+ (BOOL)urlIfyNode:(id)a0;
+ (BOOL)urlIfyNode:(id)a0 phoneNumberTypes:(unsigned long long)a1;
+ (id)urlIfyNode:(id)a0 usingScanner:(struct __DDScanner { } *)a1 phoneNumberTypes:(unsigned long long)a2;
+ (id)urlIfyNode:(id)a0 usingScanner:(struct __DDScanner { } *)a1 phoneNumberTypes:(unsigned long long)a2 withReferenceDate:(id)a3 andTimeZone:(id)a4;
+ (BOOL)urlIfyTextNode:(id)a0 inNode:(id)a1 forMatches:(id)a2;
+ (id)urlMatchesForString:(id)a0;
+ (id)urlMatchesForString:(id)a0 includingTel:(BOOL)a1;
+ (id)urlMatchesForString:(id)a0 phoneNumberTypes:(unsigned long long)a1;
+ (id)urlMatchesForString:(id)a0 usingScanner:(struct __DDScanner { } *)a1 withPhoneNumberTypes:(unsigned long long)a2 referenceDate:(id)a3 timeZone:(id)a4 storingResultsIn:(id)a5;

@end
