@interface MCMXPCMessageCrashTest : MCMXPCMessageBase <MCMParametersCrashTest>

@property (readonly, nonatomic) unsigned long long crashCount;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
