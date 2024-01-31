@class NSString;

@interface SecuritydXPCCallback : NSObject <SecuritydXPCCallbackProtocol>

@property (copy) id /* block */ callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithCallback:(id /* block */)a0;
- (void)callCallback:(BOOL)a0 error:(id)a1;

@end
