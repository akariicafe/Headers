@interface B2PIdentificationCommand : B2PCommand

@property (readonly) int infoID;

- (id)init;
- (id)data;
- (id)description;
- (id)initWithOpCode:(unsigned short)a0 route:(unsigned char)a1 data:(id)a2;

@end
