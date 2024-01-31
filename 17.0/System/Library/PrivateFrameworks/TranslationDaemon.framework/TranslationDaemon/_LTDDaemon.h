@class NSXPCListener, NSString, _LTTranslationServer, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface _LTDDaemon : NSObject <NSXPCListenerDelegate, _LTClientConnectionDelegate> {
    NSXPCListener *_translationListener;
    NSXPCListener *_textTranslationListener;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSMutableArray *_connections;
    _LTTranslationServer *_server;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)buildDateWithError:(id *)a0;
+ (id)realPathFor:(id)a0 error:(id *)a1;

- (id)init;
- (void)run;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void).cxx_destruct;
- (id)_cacheDirectoryPath;
- (void)_enterSandbox;
- (void)_setupMemoryWarningListener;
- (void)clientConnectionClosed:(id)a0;

@end
