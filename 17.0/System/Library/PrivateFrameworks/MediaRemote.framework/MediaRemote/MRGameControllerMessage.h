@class _MRGameControllerMessageProtobuf;

@interface MRGameControllerMessage : MRProtocolMessage

@property (readonly, nonatomic) _MRGameControllerMessageProtobuf *event;
@property (readonly, nonatomic) unsigned long long controllerID;

- (BOOL)shouldLog;
- (unsigned long long)type;
- (id)initWithGameControllerEvent:(id)a0 controllerID:(unsigned long long)a1;

@end
