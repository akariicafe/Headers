@interface MCMXPCMessageOpenPrimordialDataContainer : MCMXPCMessageBase <MCMParametersOpenPrimordialDataContainer>

@property (readonly, nonatomic) BOOL useCodeSignDatabase;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;

@end
