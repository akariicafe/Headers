@interface ETMessageHeaderReader : NSObject

+ (void)getSendTime:(double *)a0 type:(unsigned short *)a1 inArchive:(id)a2;
+ (id)identifierInArchive:(id)a0;
+ (unsigned short)messageTypeInArchive:(id)a0;
+ (double)sendTimeInArchive:(id)a0;

@end
