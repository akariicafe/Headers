@interface HUTipsManager_Swift : NSObject {
    void /* unknown type, empty encoding */ tileQuickToggleTip;
    void /* unknown type, empty encoding */ unanalyzedCameraClipTip;
}

@property (class, nonatomic, readonly) HUTipsManager_Swift *sharedManager;

- (void)warmUp;
- (id)init;
- (void).cxx_destruct;
- (void)toggleDidInteract;

@end
