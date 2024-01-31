@class NSArray, NSMutableSet, NSString;

@interface _GCIPCRemoteProcess : NSObject <_GCIPCProcess>

@property (copy) NSArray *connections;
@property (retain, nonatomic) NSMutableSet *connectionInvalidationRegistrations;
@property (readonly) struct { unsigned int val[8]; } auditToken;
@property (readonly) int auditSessionIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;
@property (readonly) NSString *bundleIdentifier;

- (id)init;
- (unsigned long long)hash;
- (id)redactedDescription;
- (void)addConnection:(id)a0;
- (id)initWithConnection:(id)a0;
- (BOOL)isEqualToProcess:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)debugDescription;
- (void)populateBundleIdentifierForConnection:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
