@class ATCRTBloodhoundPacketDumper;

@interface AppleTypeCPacketDumper : NSObject {
    ATCRTBloodhoundPacketDumper *_dumper;
}

- (id)initWithFileName:(id)a0;
- (void).cxx_destruct;
- (void)dumpCommand:(id)a0;
- (void)dumpResponse:(id)a0;

@end
