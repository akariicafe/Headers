@class NSString;

@interface TMLSignalDescriptor : TMLMethodDescriptor

@property (readonly, nonatomic) NSString *signalName;

- (id)initWithName:(id)a0 parameters:(id)a1;
- (id)initWithName:(id)a0 returnType:(unsigned long long)a1 parameters:(id)a2 methodSelector:(id)a3 attributes:(id)a4;

@end
