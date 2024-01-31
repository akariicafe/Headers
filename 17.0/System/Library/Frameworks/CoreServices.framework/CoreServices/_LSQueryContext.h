@protocol _LSQueryResolving;

@interface _LSQueryContext : NSObject {
    id _resolver;
}

@property (class, nonatomic) BOOL simulateLimitedMappingForXCTests;

@property (readonly) id<_LSQueryResolving> _resolver;

+ (id)defaultContext;

- (void)clearCaches;
- (id)init;
- (id)_resolveQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;
- (id)_init;
- (id)_resolver;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)enumerateResolvedResultsOfQuery:(id)a0 withBlock:(id /* block */)a1;
- (id)resolveQueries:(id)a0 error:(id *)a1;

@end
