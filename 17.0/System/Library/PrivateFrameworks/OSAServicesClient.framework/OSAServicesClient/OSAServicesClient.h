@class NSXPCConnection;
@protocol OTAAgentServices;

@interface OSAServicesClient : NSObject {
    NSXPCConnection *_connection;
    id<OTAAgentServices> _synchRemoteObjectProxy;
}

+ (id)sharedClient;

- (id)awdKey;
- (id)init;
- (id)crashreporterKey;
- (void)dealloc;
- (id)queryKey:(struct __CFString { } *)a0;
- (unsigned int)uidForUser:(id)a0;
- (void).cxx_destruct;
- (BOOL)setPreference:(id)a0 forUser:(id)a1 inDomain:(id)a2 toValue:(void *)a3;
- (BOOL)deletePreference:(id)a0 forUser:(id)a1 inDomain:(id)a2;

@end
