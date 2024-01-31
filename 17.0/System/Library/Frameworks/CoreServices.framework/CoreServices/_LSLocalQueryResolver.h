@class NSString;

@interface _LSLocalQueryResolver : NSObject <_LSQueryResolving>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_enumerateResolvedResultsOfQuery:(id)a0 XPCConnection:(id)a1 withBlock:(id /* block */)a2;
- (id)_resolveQueries:(id)a0 XPCConnection:(id)a1 error:(id *)a2;

@end
