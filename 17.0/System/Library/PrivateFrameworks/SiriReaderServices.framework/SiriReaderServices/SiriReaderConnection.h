@class NSXPCConnection;

@interface SiriReaderConnection : NSObject {
    NSXPCConnection *_connection;
}

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)endMediaSessionForIdentifier:(id)a0;
- (void)readText:(id)a0 textBody:(id)a1 textIdentifier:(id)a2 textLocale:(id)a3 textLeadingImage:(id)a4 activationSource:(long long)a5;
- (long long)getPlaybackStatusForIdentifier:(id)a0;
- (void)pausePlaybackForIdentifier:(id)a0;
- (void)readText:(id)a0 textBody:(id)a1 textIdentifier:(id)a2 textLocale:(id)a3 textLeadingImage:(id)a4;
- (id)readerProtocol;
- (void)resumePlaybackForIdentifier:(id)a0;

@end
