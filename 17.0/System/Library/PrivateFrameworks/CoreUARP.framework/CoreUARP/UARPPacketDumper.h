@class BloodhoundPacketDumper;

@interface UARPPacketDumper : NSObject {
    BloodhoundPacketDumper *_bloodhoundDumper;
}

- (id)initWithFileName:(id)a0;
- (void).cxx_destruct;
- (void)dump:(id)a0 accessoryID:(id)a1 uarpStatus:(unsigned int)a2 direction:(unsigned long long)a3;

@end
