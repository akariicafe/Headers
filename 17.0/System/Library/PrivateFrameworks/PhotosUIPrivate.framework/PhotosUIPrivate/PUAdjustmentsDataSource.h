@class NSString, PEValuesCalculator, PICompositionController, PEAutoAdjustmentController, NSMutableArray;
@protocol PUAdjustmentsDataSourceDelegate;

@interface PUAdjustmentsDataSource : NSObject <PUAdjustmentsViewDataSource>

@property (retain, nonatomic) NSMutableArray *adjustmentInfoSections;
@property (retain, nonatomic) PICompositionController *compositionController;
@property (retain, nonatomic) PEAutoAdjustmentController *autoEnhanceController;
@property (retain, nonatomic) PEValuesCalculator *valuesCalculator;
@property (copy, nonatomic) NSString *lastAdjustmentLocalizedName;
@property (nonatomic) unsigned long long assetType;
@property (weak, nonatomic) id<PUAdjustmentsDataSourceDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)renderer;
- (long long)numberOfItemsInSection:(long long)a0;
- (long long)numberOfSections;
- (void).cxx_destruct;
- (BOOL)canModifyAdjustmentAtIndexPath:(id)a0;
- (id)_autoEnhanceAdjustmentInfo;
- (id)_colorAdjustmentInfos;
- (void)_createAdjustmentInfos;
- (id)_debugAdjustmentInfos;
- (id)_detailAdjustmentInfos;
- (void)_enableNonAutoAdjustments:(BOOL)a0;
- (id)_lightAdjustmentInfos;
- (void)_modifyAdjustmentForInfo:(id)a0;
- (id)_newAdjustmentInfoWithAdjustmentKey:(id)a0 settingKey:(id)a1 attributeKey:(id)a2;
- (id)_newAdjustmentInfoWithIdentifier:(id)a0 adjustmentKey:(id)a1 settingKey:(id)a2 attributeKey:(id)a3;
- (void)_resetEnabledStateForAutoEnhancedInfos;
- (void)_setDefaultsForInfo:(id)a0;
- (id)_smartBlackAndWhiteAdjustmentInfos;
- (void)_updateAdjustmentInfos;
- (id)_vignetteAdjustmentInfos;
- (void)beginInteractiveChange;
- (void)compositionControllerDidChange;
- (void)endInteractiveChange;
- (id)infoForItemAtIndexPath:(id)a0;
- (void)modifyValue:(double)a0 atIndexPath:(id)a1;
- (long long)numberOfItemsInAllSections;
- (void)resetInfoAtIndexPath:(id)a0;
- (void)setAdjustmentEnabled:(BOOL)a0 atIndexPath:(id)a1 completionHandler:(id /* block */)a2;
- (void)setupWithCompositionController:(id)a0 valuesCalculator:(id)a1 autoAdjustmentController:(id)a2 assetType:(unsigned long long)a3;

@end
