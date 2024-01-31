@interface ECPackedDataUtils : NSObject

+ (id)dumpDataToHexadecimalString:(char *)a0 start:(unsigned int)a1 stop:(unsigned int)a2 nicelyFormatted:(BOOL)a3;
+ (char *)prepareForDataOfLength:(unsigned int)a0 atIndex:(unsigned int)a1 withPreviousLength:(unsigned int)a2 inPackedData:(struct __CFData { } *)a3 packedDataSize:(unsigned int)a4;
+ (id)readStringFromData:(char *)a0 atOffset:(unsigned int)a1 withLength:(unsigned int)a2;
+ (BOOL)setData:(char *)a0 ofLength:(unsigned int)a1 atIndex:(unsigned int)a2 withPreviousLength:(unsigned int)a3 inPackedData:(struct __CFData { } *)a4 packedDataSize:(unsigned int)a5;
+ (void)writeString:(id)a0 toPackedData:(struct __CFData { } *)a1 packedDataSize:(unsigned int)a2 atIndex:(unsigned int)a3 withPreviousLength:(unsigned short)a4 outLength:(unsigned short *)a5;

@end
