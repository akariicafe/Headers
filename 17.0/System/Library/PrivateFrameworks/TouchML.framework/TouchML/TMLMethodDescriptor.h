@class NSString, NSArray;

@interface TMLMethodDescriptor : NSObject <TMLModelSerialize>

@property (readonly, nonatomic) NSString *methodName;
@property (readonly, nonatomic) NSArray *parameters;
@property (readonly, nonatomic) NSString *methodSelector;
@property (readonly, nonatomic) unsigned long long returnType;
@property (readonly, nonatomic, getter=isOptional) BOOL optional;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)decode:(const struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } *)a0;
+ (id)methodSelectorForMethodName:(id)a0 parameters:(id)a1;

@end
