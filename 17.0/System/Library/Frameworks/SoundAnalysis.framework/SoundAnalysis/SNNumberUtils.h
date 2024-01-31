@interface SNNumberUtils : NSObject

+ (id)numberClampedToSaturatedUInt32:(id)a0;
+ (BOOL)numberIsDouble:(id)a0;
+ (BOOL)numberIsUInt32:(id)a0;
+ (BOOL)validateNumberIsPositive:(id)a0 error:(id *)a1;
+ (id)numberClampedToSaturatedUInt16:(id)a0;
+ (id)numberClampedToSaturatedUInt64:(id)a0;
+ (BOOL)numberIsUInt16:(id)a0;
+ (BOOL)numberIsUInt64:(id)a0;
+ (BOOL)validateNumberIsNegative:(id)a0 error:(id *)a1;
+ (long long)gcdOfInt64:(long long)a0 andOther:(long long)a1;
+ (id)numberClampedToSaturatedInt16:(id)a0;
+ (id)numberClampedToSaturatedInt32:(id)a0;
+ (id)numberClampedToSaturatedInt64:(id)a0;
+ (id)numberClampedToSaturatedInt8:(id)a0;
+ (id)numberClampedToSaturatedInteger:(id)a0;
+ (id)numberClampedToSaturatedUInt8:(id)a0;
+ (id)numberClampedToSaturatedUnsignedInteger:(id)a0;
+ (BOOL)numberIsInt16:(id)a0;
+ (BOOL)numberIsInt32:(id)a0;
+ (BOOL)numberIsInt64:(id)a0;
+ (BOOL)numberIsInt8:(id)a0;
+ (BOOL)numberIsInteger:(id)a0;
+ (BOOL)numberIsNegative:(id)a0;
+ (BOOL)numberIsPositive:(id)a0;
+ (BOOL)numberIsUInt8:(id)a0;
+ (BOOL)numberIsUnsignedInteger:(id)a0;
+ (short)saturatedInt16FromNumber:(id)a0;
+ (int)saturatedInt32FromNumber:(id)a0;
+ (long long)saturatedInt64FromNumber:(id)a0;
+ (char)saturatedInt8FromNumber:(id)a0;
+ (long long)saturatedIntegerFromNumber:(id)a0;
+ (unsigned short)saturatedUInt16FromNumber:(id)a0;
+ (unsigned int)saturatedUInt32FromNumber:(id)a0;
+ (unsigned long long)saturatedUInt64FromNumber:(id)a0;
+ (unsigned char)saturatedUInt8FromNumber:(id)a0;
+ (unsigned long long)saturatedUnsignedIntegerFromNumber:(id)a0;
+ (BOOL)thoroughlyCheckNumber:(id)a0 isEqualToNumber:(id)a1;
+ (BOOL)validateNumberIsDouble:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsInt16:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsInt32:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsInt64:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsInt8:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsInteger:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsUInt16:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsUInt32:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsUInt64:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsUInt8:(id)a0 error:(id *)a1;
+ (BOOL)validateNumberIsUnsignedInteger:(id)a0 error:(id *)a1;

- (id)init;

@end
