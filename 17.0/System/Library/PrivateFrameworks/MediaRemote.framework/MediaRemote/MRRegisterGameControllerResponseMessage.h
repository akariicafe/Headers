@interface MRRegisterGameControllerResponseMessage : MRProtocolMessage

@property (readonly, nonatomic) unsigned long long controllerID;

- (unsigned long long)type;
- (id)initWithControllerID:(unsigned long long)a0;

@end
