@class NSString;

@interface TMLFunction : NSObject <TMLModelSerialize>

@property (readonly, nonatomic) NSString *functionName;
@property (readonly, nonatomic) NSString *functionBody;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;

- (void).cxx_destruct;
- (void)encode:(struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
- (id)initWithName:(id)a0 body:(id)a1;

@end
