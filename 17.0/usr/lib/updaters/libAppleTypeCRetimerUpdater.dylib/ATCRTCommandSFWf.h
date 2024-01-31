@interface ATCRTCommandSFWf : ATCRTCommand

@property (readonly) unsigned char blockCount;
@property (readonly) unsigned char value;

- (id)description;
- (id)inputData;
- (id)initWithBlockCount:(unsigned char)a0 value:(unsigned char)a1;

@end
