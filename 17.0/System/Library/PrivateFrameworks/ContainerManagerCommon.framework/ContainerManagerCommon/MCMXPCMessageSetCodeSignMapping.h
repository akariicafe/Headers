@class NSString;

@interface MCMXPCMessageSetCodeSignMapping : MCMXPCMessageWithIdentifierBase <MCMParametersSetCodeSignMapping>

@property (readonly, nonatomic) id info;
@property (readonly, nonatomic) id options;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
