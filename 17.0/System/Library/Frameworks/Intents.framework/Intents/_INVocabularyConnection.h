@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _connectionValid;
}

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)settingsService;
- (void)_clearConnection;
- (void).cxx_destruct;
- (id)_connect;
- (id)_syncService;

@end
