@class NSString;

@interface SSVApplicationCapabilitiesRequest : SSRequest <SSXPCCoding>

@property (copy, nonatomic) NSString *bundleID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)startWithCapabilitiesResponseBlock:(id /* block */)a0;

@end
