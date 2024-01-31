@class NSString, MKHTTPParser, NSMutableDictionary, MKListener, MKCertificate;
@protocol MKHTTPServerDelegate;

@interface MKHTTPServer : NSObject <MKListenerDelegate> {
    MKListener *_listener;
    MKHTTPParser *_parser;
    NSMutableDictionary *_requests;
    NSMutableDictionary *_routers;
}

@property (weak, nonatomic) id<MKHTTPServerDelegate> delegate;
@property (nonatomic) BOOL useHTTPS;
@property (nonatomic) unsigned long long port;
@property (copy, nonatomic) NSString *service;
@property (retain, nonatomic) MKCertificate *certificate;
@property (retain, nonatomic) MKCertificate *clientCertificate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)run;
- (void)connection:(id)a0 didReceiveData:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (id)method:(unsigned long long)a0;
- (void)addRouter:(id)a0 method:(unsigned long long)a1 path:(id)a2;
- (void)listener:(id)a0 didOpen:(long long)a1;
- (void)listenerDidCancel:(id)a0;
- (id)routerForMethod:(id)a0 path:(id)a1;

@end
