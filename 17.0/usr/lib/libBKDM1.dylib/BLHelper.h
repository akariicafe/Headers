@interface BLHelper : NSObject

+ (id)stringFromProvisioningState:(unsigned long long)a0;
+ (id)stringFromIQProblemClass:(unsigned int)a0;
+ (id)stringFromSensorProvisionCommandStatus:(struct { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned int x6; } *)a0;
+ (id)stringFromWakeGestureState:(long long)a0;
+ (void)initialize;
+ (id)stringFromClientObject:(id)a0;
+ (BOOL)writeImageAsPGM:(id)a0 withWidth:(unsigned int)a1 height:(unsigned int)a2 toFile:(id)a3 withComment:(id)a4 attributes:(id)a5;
+ (id)stringFromResetReason:(unsigned int)a0;
+ (id)stringFromSensorSecurityAssurance:(struct { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned int x6; } *)a0;
+ (id)systemVersion;
+ (id)stringFromMobileKeyBagState:(unsigned int)a0;
+ (id)stringFromLoggingType:(unsigned long long)a0;
+ (id)stringFromDictionary:(id)a0;
+ (id)stringFromSensorIndicator:(unsigned char)a0;
+ (id)stringFromSensorAdditionalData:(struct { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned int x6; } *)a0;
+ (id)stringFromClientObjectArray:(id)a0;
+ (id)stringFromSKSLockState:(unsigned short)a0;
+ (id)stringFromIQFeedback:(unsigned int)a0;
+ (id)stringFromArray:(id)a0;
+ (id)stringFromSensorStatusLog:(struct { unsigned long long x0; unsigned char x1; unsigned char x2; unsigned char x3; unsigned char x4; unsigned char x5; unsigned int x6; } *)a0 maskUnstableFields:(BOOL)a1;
+ (id)stringFromScanningState:(unsigned int)a0;
+ (id)stringFromIQAssessment:(unsigned int)a0;
+ (id)stringFromStatus:(unsigned int)a0;
+ (unsigned long long)writeASLToFile:(id)a0 withAttributes:(id)a1 filter:(id)a2 history:(double)a3 errorKeywords:(id)a4 containsErrors:(unsigned long long *)a5;

@end
