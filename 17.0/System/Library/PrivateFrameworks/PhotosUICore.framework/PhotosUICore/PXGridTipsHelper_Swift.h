@class NSString;

@interface PXGridTipsHelper_Swift : PXTipsHelper_Swift {
    void /* unknown type, empty encoding */ switchLibraryTip;
    void /* unknown type, empty encoding */ syndicatedAssetsTip;
    void /* unknown type, empty encoding */ hasStartedTips;
}

@property (class, nonatomic, readonly) PXGridTipsHelper_Swift *shared;
@property (class, nonatomic, readonly) NSString *curatedLibrarySwitchTipID;
@property (class, nonatomic, readonly) NSString *syndicatedAssetsTipID;

+ (void)setTip:(id)a0 isPresentable:(BOOL)a1;
+ (void)setTipActionPerformed:(id)a0;
+ (void)setTipsPresentationDelegate:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
