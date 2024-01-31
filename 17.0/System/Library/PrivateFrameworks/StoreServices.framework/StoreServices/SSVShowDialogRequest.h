@class NSString, NSObject;
@protocol OS_xpc_object;

@interface SSVShowDialogRequest : SSRequest <SSXPCCoding>

@property (readonly, nonatomic) NSObject<OS_xpc_object> *encodedDialog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithXPCEncoding:(id)a0;
- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithEncodedDialog:(id)a0;
- (void)startWithDialogResponseBlock:(id /* block */)a0;

@end
