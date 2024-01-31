@class NSString, GEOXPCConnection;

@interface GEOResourceManifestUpdateAssertion : NSObject {
    NSString *_reason;
    double _creationTimestamp;
    GEOXPCConnection *_connection;
    int _notifyToken;
}

- (id)initWithReason:(id)a0;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)_connectToGeod;

@end
