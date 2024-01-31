@class NSDictionary, NSMutableDictionary, NSObject;
@protocol CMIOExtensionSessionDelegate, OS_xpc_object;

@interface CMIOExtensionSession : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableDictionary *_extensions;
    NSObject<OS_xpc_object> *_registerExtensionServiceConnection;
}

@property (readonly, weak, nonatomic) id<CMIOExtensionSessionDelegate> delegate;
@property (readonly, copy, nonatomic) NSDictionary *extensions;

+ (id)sessionWithDelegate:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;

@end
