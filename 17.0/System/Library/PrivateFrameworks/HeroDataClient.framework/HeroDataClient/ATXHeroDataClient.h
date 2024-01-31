@class NSXPCConnection;

@interface ATXHeroDataClient : NSObject <ATXHeroDataXPCInterface> {
    NSXPCConnection *_xpcConnection;
}

- (id)init;
- (void)dealloc;
- (void)getCurrentHeroPoiCategoryWithCompletion:(id /* block */)a0;
- (void)donateHeroAppPredictions:(id)a0 completion:(id /* block */)a1;
- (void)feedbackScoreForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addHardRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addConfirmForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)openAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;
- (void)addSoftRejectForAppClipWithHeroAppPrediction:(id)a0 completion:(id /* block */)a1;

@end
