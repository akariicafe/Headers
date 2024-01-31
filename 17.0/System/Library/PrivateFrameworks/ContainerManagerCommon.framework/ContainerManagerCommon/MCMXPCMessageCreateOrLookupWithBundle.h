@class NSURL;

@interface MCMXPCMessageCreateOrLookupWithBundle : MCMXPCMessageBase <MCMParametersCreateOrLookupWithBundle>

@property (readonly, nonatomic) BOOL createIfNecessary;
@property (readonly, nonatomic) BOOL transient;
@property (readonly, nonatomic) BOOL issueSandboxExtension;
@property (readonly, nonatomic) const char *sandboxToken;
@property (readonly, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSURL *executableURL;

- (id)initWithXPCObject:(id)a0 context:(id)a1 error:(unsigned long long *)a2;
- (void).cxx_destruct;

@end
