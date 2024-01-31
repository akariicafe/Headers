@class ATCRTBloodhoundPacketDumper, NSObject;
@protocol OS_dispatch_queue;

@interface ThunderboltPacketDumper : NSObject {
    ATCRTBloodhoundPacketDumper *_dumper;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

@property BOOL suppressed;

- (void).cxx_destruct;
- (void)dumpATCConfigRegisterRead:(unsigned int)a0 value:(unsigned int)a1;
- (void)dumpATCConfigRegisterWrite:(unsigned int)a0 value:(unsigned int)a1;
- (void)dumpATCMetadataPacketType:(unsigned short)a0 metadata:(unsigned int)a1 opCode:(unsigned short)a2;
- (void)dumpATCMetadataRead:(unsigned int)a0 opCode:(unsigned short)a1;
- (void)dumpATCMetadataWrite:(unsigned int)a0 opCode:(unsigned short)a1;
- (void)dumpATCRegisterRead:(unsigned int)a0 value:(unsigned int)a1;
- (void)dumpATCRegisterWrite:(unsigned int)a0 value:(unsigned int)a1;
- (void)dumpATCRouterOperationWithOpCode:(unsigned short)a0 data:(id)a1;
- (void)dumpPacketType:(unsigned short)a0 data:(id)a1;
- (void)dumpRegisterOperation:(unsigned short)a0 registerNumber:(unsigned int)a1 value:(unsigned int)a2;

@end
