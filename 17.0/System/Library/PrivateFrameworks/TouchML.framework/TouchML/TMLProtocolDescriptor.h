@class Protocol, NSString, NSMutableDictionary, NSSet;

@interface TMLProtocolDescriptor : NSObject

@property (readonly, nonatomic) NSString *protocolName;
@property (readonly, nonatomic) NSMutableDictionary *signals;
@property (readonly, nonatomic) Protocol *objcProtocol;
@property (copy, nonatomic) NSString *objcProtocolName;
@property (readonly, nonatomic) NSSet *implementsProtocols;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
- (void)addSignal:(id)a0;
- (id)initWithName:(id)a0 implementsProtocols:(id)a1;

@end
