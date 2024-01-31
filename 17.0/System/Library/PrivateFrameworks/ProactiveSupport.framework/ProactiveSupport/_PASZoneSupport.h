@interface _PASZoneSupport : NSObject

+ (id)newMutableSetInZone:(struct _NSZone { } *)a0 capacity:(unsigned long long)a1;
+ (id)newMutableDataInZone:(struct _NSZone { } *)a0;
+ (id)copyDate:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)copySet:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)newMutableDataInZone:(struct _NSZone { } *)a0 capacity:(unsigned long long)a1;
+ (id)mutableCopyData:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)newMutableSetInZone:(struct _NSZone { } *)a0;
+ (id)newMutableStringInZone:(struct _NSZone { } *)a0 capacity:(unsigned long long)a1;
+ (id)copyNumber:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)mutableCopyDictionary:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)newMutableArrayInZone:(struct _NSZone { } *)a0;
+ (id)copyDictionary:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)newMutableDataInZone:(struct _NSZone { } *)a0 length:(unsigned long long)a1;
+ (id)copyUUID:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)newMutableDictionaryInZone:(struct _NSZone { } *)a0;
+ (id)newMutableArrayInZone:(struct _NSZone { } *)a0 capacity:(unsigned long long)a1;
+ (id)mutableCopyString:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)mutableCopyArray:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)mutableCopySet:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)copyArray:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)newMutableStringInZone:(struct _NSZone { } *)a0;
+ (id)copyString:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)copyData:(id)a0 toZone:(struct _NSZone { } *)a1;
+ (id)deepCopyObject:(id)a0 toZone:(struct _NSZone { } *)a1 strategy:(struct { unsigned char x0 : 1; unsigned char x1 : 1; unsigned char x2 : 1; unsigned char x3 : 1; unsigned char x4 : 1; unsigned char x5 : 1; })a2;
+ (id)newMutableDictionaryInZone:(struct _NSZone { } *)a0 capacity:(unsigned long long)a1;

@end
