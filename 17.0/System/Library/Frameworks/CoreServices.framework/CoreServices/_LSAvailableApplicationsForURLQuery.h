@class NSURL;

@interface _LSAvailableApplicationsForURLQuery : _LSQuery

@property (readonly, copy, nonatomic) NSURL *URL;

+ (BOOL)supportsSecureCoding;

- (id)initWithURL:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)yieldBundles:(const void *)a0 context:(struct LSContext { id x0; } *)a1 block:(id /* block */)a2;

@end
