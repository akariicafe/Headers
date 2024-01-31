@class AVConferenceXPCClient, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface VCCaptionsManager : NSObject <VCCaptionsSourceDelegate> {
    NSMutableDictionary *_streamTokenList;
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;

- (id)init;
- (void)dealloc;
- (void)deregisterBlocksForService;
- (void)registerBlocksForService;
- (void)streamToken:(long long)a0 didDetectGibberish:(BOOL)a1;
- (id)captionsSourceFromClientContext:(id)a0;
- (void)notifyClientsWithStreamToken:(long long)a0 service:(char *)a1 arguments:(id)a2;
- (void)registerCaptionsSource:(id)a0 streamToken:(long long)a1;
- (void)streamToken:(long long)a0 didDisableCaptions:(BOOL)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didEnableCaptions:(BOOL)a1 error:(id)a2;
- (void)streamToken:(long long)a0 didStartCaptioningWithReason:(unsigned char)a1;
- (void)streamToken:(long long)a0 didStopCaptioningWithReason:(unsigned char)a1;
- (void)streamToken:(long long)a0 didUpdateCaptions:(id)a1;
- (void)unregisterCaptionsSourceWithStreamToken:(long long)a0;

@end
