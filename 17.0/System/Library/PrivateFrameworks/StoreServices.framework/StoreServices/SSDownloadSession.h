@class SSDownload, SSDownloadAsset, SSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface SSDownloadSession : NSObject {
    SSXPCConnection *_controlConnection;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    long long _sessionID;
    long long _assetID;
    long long _downloadID;
}

@property (readonly) SSDownload *download;
@property (readonly) SSDownloadAsset *downloadAsset;

- (id)init;
- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_copySessionPropertyWithKey:(const char *)a0;
- (id)_initSSDownloadSession;
- (id)_initWithMessage:(id)a0 controlConnection:(id)a1;

@end
