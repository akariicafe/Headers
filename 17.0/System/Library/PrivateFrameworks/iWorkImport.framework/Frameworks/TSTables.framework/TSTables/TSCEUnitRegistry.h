@interface TSCEUnitRegistry : NSObject

+ (void)initialize;
+ (id)siPrefixStrings;
+ (id)baseUnitStringsForDimension:(unsigned char)a0;
+ (unsigned char)binaryUnitPrefixForChars:(unsigned short)a0 :(unsigned short)a1;
+ (unsigned short)canonicalUnitForDimension:(unsigned char)a0;
+ (id)convertInNumber:(const struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a0 outNumber:(struct TSUDecimal { struct { unsigned long long x0[2]; } x0; } *)a1 fromUnit:(struct TSCEPrefixedBaseUnit { unsigned char x0; unsigned short x1; })a2 toUnit:(struct TSCEPrefixedBaseUnit { unsigned char x0; unsigned short x1; })a3;
+ (id)currencyCodeForUnit:(unsigned short)a0;
+ (unsigned char)dimensionForUnit:(unsigned short)a0;
+ (double)multiplierForUnit:(struct TSCEPrefixedBaseUnit { unsigned char x0; unsigned short x1; })a0;
+ (struct TSCEPrefixedBaseUnit { unsigned char x0; unsigned short x1; })prefixedUnitForString:(id)a0;
+ (id)siBinaryPrefixStrings;
+ (unsigned short)unitForCurrencyCode:(id)a0;
+ (unsigned short)unitForString:(id)a0;
+ (BOOL)unitIsMetric:(unsigned short)a0;
+ (unsigned char)unitPrefixForCharacter:(unsigned short)a0;

@end
