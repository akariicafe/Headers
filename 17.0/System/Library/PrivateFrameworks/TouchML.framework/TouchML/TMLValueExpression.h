@class NSString, NSArray;

@interface TMLValueExpression : NSObject <TMLModelSerialize>

@property (readonly, nonatomic) NSString *expressionText;
@property (readonly, nonatomic) NSArray *bindings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;

@end
