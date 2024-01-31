@class NSString, BSServiceConnection;

@interface SiriActivationSource : NSObject {
    BSServiceConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BOOL _active;
    BOOL _knowsIfActive;
}

@property (retain, nonatomic) NSString *identifier;

- (id)init;
- (void)dealloc;
- (void)invalidate;
- (BOOL)isEnabled;
- (void).cxx_destruct;
- (BOOL)isActive;
- (oneway void)activeChangedTo:(id)a0;

@end
