@interface PassKitUI.UIFlowManager : NSObject <PKUIFlowManagerRendererDelegate> {
    void /* unknown type, empty encoding */ resultHandler;
    void /* unknown type, empty encoding */ onViewLoaded;
    void /* unknown type, empty encoding */ root;
    void /* unknown type, empty encoding */ activeNode;
    void /* unknown type, empty encoding */ completion;
    void /* unknown type, empty encoding */ isPerformingMutation;
    void /* unknown type, empty encoding */ inflightRenderersBeingPresented;
}

- (void)rendererDidDisappearWithRenderer:(id)a0;
- (void)rendererDidRunOutOfContentWithRenderer:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
