@class AVContentKeySession, NSString, NSMutableDictionary, NSData, NSObject;
@protocol OS_dispatch_queue, APRKContentKeyHelperDelegate;

@interface APRKContentKeyHelper : NSObject <AVContentKeySessionDelegate> {
    NSObject<OS_dispatch_queue> *_contentKeySessionQueue;
    AVContentKeySession *_contentKeySession;
    NSMutableDictionary *_activeContentKeyRequests;
    NSData *_appIDData;
}

@property (nonatomic) BOOL forwardsFPSSecureStopData;
@property (weak, nonatomic) id<APRKContentKeyHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)contentKeySession:(id)a0 didProvideContentKeyRequest:(id)a1;
- (void)contentKeySession:(id)a0 didProvideRenewingContentKeyRequest:(id)a1;
- (void)contentKeySessionDidGenerateExpiredSessionReport:(id)a0;
- (void)_performContentKeyRequest:(id)a0 isRenewalRequest:(BOOL)a1;
- (void)forgetAllActiveContentKeyRequests;
- (BOOL)isHandlingContentKeyRequestWithURLString:(id)a0;
- (void)processStreamingKeyRequestWithDictionary:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)processUnhandledURLResponseWithDictionary:(id)a0 error:(id *)a1;
- (void)registerAVURLAsset:(id)a0;
- (void)unregisterAVURLAsset:(id)a0;

@end
