@class NSURL;

@interface LSPlugInQueryWithURL : LSPlugInQuery {
    NSURL *_bundleURL;
}

+ (BOOL)supportsSecureCoding;

- (unsigned long long)hash;
- (id)_initWithURL:(id)a0;
- (void)_enumerateWithXPCConnection:(id)a0 block:(id /* block */)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_bundleURL;

@end
