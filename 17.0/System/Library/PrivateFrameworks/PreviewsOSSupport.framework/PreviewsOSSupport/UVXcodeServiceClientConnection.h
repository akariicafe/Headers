@class NSString;

@interface UVXcodeServiceClientConnection : UVBSConnection <UVBSClientConnection, UVXcodeServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createWithVariant:(long long)a0 error:(id *)a1;

- (void)activate;
- (oneway void)sendMessage:(id)a0 reply:(id /* block */)a1;

@end
