@class NSXPCConnection;
@protocol OTATaskingAgent;

@interface OTATaskingAgentClient : NSObject {
    NSXPCConnection *_connection;
    id<OTATaskingAgent> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (id)awdKey;
- (id)init;
- (id)crashreporterKey;
- (unsigned int)uidForUser:(id)a0;
- (void).cxx_destruct;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;

@end
