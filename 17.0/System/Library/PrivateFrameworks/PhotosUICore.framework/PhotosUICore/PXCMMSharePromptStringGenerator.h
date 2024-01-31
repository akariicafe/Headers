@interface PXCMMSharePromptStringGenerator : NSObject

+ (id)_attributedStringWithString:(id)a0 attributes:(id)a1 boldFont:(id)a2 boldRange1:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a3 boldRange2:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a4;
+ (id)_stringWithComponentsCount:(unsigned long long)a0 components:(id)a1 containsOtherPeople:(BOOL)a2 outBoldRange1:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a3 outBoldRange2:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4;
+ (id)sharePromptStringWithAttributes:(id)a0 boldFont:(id)a1 lines:(long long)a2 width:(double)a3 names:(id)a4 containsUnverifiedPersons:(BOOL)a5;

@end
