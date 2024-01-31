@class NSXPCListenerEndpoint;

@interface LSSettingsStoreConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSXPCListenerEndpoint *endpoint;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEndpoint:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
