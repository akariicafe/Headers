@interface STFIBPProvider : NSObject

+ (id)STFVideoProcessorForVersion:(unsigned int)a0 ringBufferSize:(unsigned int)a1 historySize:(unsigned int)a2 cmdQueue:(id)a3;
+ (id)STFStillIBPForVersion:(unsigned int)a0;

@end
