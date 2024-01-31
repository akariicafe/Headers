@class AppleTypeCPacketDumper;
@protocol AppleTypeCRetimerIICDelegate;

@interface AppleTypeCRetimerIIC : AppleTypeCRetimerIICBase {
    AppleTypeCPacketDumper *_dumper;
}

@property (weak) id<AppleTypeCRetimerIICDelegate> delegate;

- (void).cxx_destruct;
- (void)performReset;
- (id)sendCommand:(id)a0;
- (unsigned char)sfwfBlockCount:(const char *)a0 length:(unsigned int)a1;
- (unsigned int)sleepTimeForCommandResultPollIteration:(unsigned int)a0;
- (BOOL)startPacketDumperWithFileName:(id)a0;
- (BOOL)transferFirmware:(const char *)a0 length:(unsigned int)a1;

@end
