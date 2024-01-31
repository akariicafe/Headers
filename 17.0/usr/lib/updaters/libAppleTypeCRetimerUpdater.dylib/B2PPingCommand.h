@interface B2PPingCommand : B2PCommand {
    unsigned char _protocolVersion;
}

- (id)init;
- (id)data;
- (id)description;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 data:(id)a2;

@end
