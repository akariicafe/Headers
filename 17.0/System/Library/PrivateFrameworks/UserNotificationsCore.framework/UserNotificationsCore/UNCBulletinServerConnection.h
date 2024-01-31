@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface UNCBulletinServerConnection : NSObject {
    NSXPCConnection *_bbServerConnection;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)clientInterface;
+ (id)serverInterface;

- (void)refreshSectionInfo;
- (id)initWithQueue:(id)a0;
- (id)init;
- (void)dealloc;
- (void)_resetBBServerSettingsConnection;
- (void)refreshGlobalSettings;
- (id)_ensureBBServerSettingsConnection;
- (void)refreshAnnounceSettings;
- (void).cxx_destruct;
- (id)activeSectionIDs;
- (id)asyncServerProxyObject;
- (id)serverProxyObject;

@end
