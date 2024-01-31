@interface _FPProviderDomainChangesHandlerWrapper : NSObject {
    id /* block */ _handler;
}

@property (getter=isUnregistered) BOOL unregistered;

+ (id)wrapperWithHandler:(id /* block */)a0;

- (void).cxx_destruct;
- (void)callHandlerWithProvidersByID:(id)a0 error:(id)a1;

@end
