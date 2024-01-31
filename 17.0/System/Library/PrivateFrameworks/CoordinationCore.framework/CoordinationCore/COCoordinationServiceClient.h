@class NSString, NSXPCConnection;

@interface COCoordinationServiceClient : NSObject <NSCopying> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *clientBundleIdentifier;

- (unsigned long long)hash;
- (id)initWithConnection:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
