@class _MRGameControllerPropertiesProtobuf;

@interface MRRegisterGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRGameControllerPropertiesProtobuf *properties;

- (id)initWithProperties:(id)a0;
- (unsigned long long)type;

@end
