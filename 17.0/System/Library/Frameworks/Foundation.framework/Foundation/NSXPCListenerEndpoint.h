@class NSObject;
@protocol OS_xpc_object;

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding> {
    NSObject<OS_xpc_object> *_endpoint;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithConnection:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_endpoint;
- (void)_setEndpoint:(id)a0;

@end
