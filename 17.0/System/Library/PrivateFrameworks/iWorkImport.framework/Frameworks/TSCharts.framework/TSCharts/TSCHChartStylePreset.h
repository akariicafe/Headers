@class TSCHLegendStyle, NSUUID, NSArray, TSCHReferenceLineStyle, TSCHChartStyleState, NSString, TSCHChartStyle, TSSStylesheet;

@interface TSCHChartStylePreset : TSPObject <TSSCustomPresetMigration, TSCHParagraphStyleOwner, TSCHStyleSwapSupporting, TSSPreset, TSPCopying, TSKModel> {
    BOOL _hasUpgradedFromFinalizeHandler;
}

@property (readonly, copy, nonatomic) TSCHChartStyleState *chartStyleState;
@property (readonly, nonatomic) TSCHChartStyle *chartStyle;
@property (readonly, nonatomic) TSCHLegendStyle *legendStyle;
@property (readonly, nonatomic) NSArray *valueAxisStyles;
@property (readonly, nonatomic) NSArray *categoryAxisStyles;
@property (readonly, nonatomic) NSArray *seriesStyles;
@property (readonly, nonatomic) NSArray *paragraphStyles;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) TSCHReferenceLineStyle *refLineStyle;
@property (readonly, nonatomic) NSArray *allStyles;
@property (readonly, nonatomic) TSSStylesheet *stylesheet;
@property (readonly, nonatomic) NSString *presetKind;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)needsObjectUUID;
+ (void)upgradeFor3DShadowPropertyMigrationFromChartStyle:(id)a0 seriesStyles:(id)a1;
+ (id)p_getDefaultErrorBarColor:(id)a0 valueAxisStyles:(id)a1;
+ (id)p_getDefaultTrendLineShadowColor:(id)a0;
+ (id)p_getDefaultTrendLineStrokeColor:(id)a0;
+ (void)p_replaceProperty:(int)a0 inStyle:(id)a1 withObject:(id)a2;
+ (void)p_useProperty:(int)a0 asProperty:(int)a1 inStyle:(id)a2;
+ (id)presetWithContext:(id)a0 fromStyleState:(id)a1 uuid:(id)a2;
+ (void)upgradeCalloutLineStylesForSeriesPresets:(id)a0 valueAxisPresets:(id)a1 paragraphPresets:(id)a2;
+ (void)upgradeDonutStylesForSeriesPresets:(id)a0;
+ (void)upgradeForTrendLineEquationAndR2LabelsPropertyMigrationFromChartStyle:(id)a0 seriesStyles:(id)a1;
+ (void)upgradeShadowPropertyForParagraphStyles:(id)a0;
+ (void)upgradeTrendLinesAndErrorBarsForSeriesPresets:(id)a0 valueAxisPresets:(id)a1 paragraphPresets:(id)a2;

- (void).cxx_destruct;
- (id)copyWithContext:(id)a0;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inContext:(struct CGContext { } *)a1;
- (id)referencedStyles;
- (id)swatchImage;
- (void)saveToArchiver:(id)a0;
- (id)initWithContext:(id)a0 chartStyle:(id)a1 legendStyle:(id)a2 valueAxisStyles:(id)a3 categoryAxisStyles:(id)a4 seriesStyles:(id)a5 paragraphStyles:(id)a6 refLineStyle:(id)a7 uuid:(id)a8;
- (void)loadFromUnarchiver:(id)a0;
- (id)migratedPresetInTheme:(id)a0 followReplacements:(BOOL)a1;
- (void)upgradePresetIfNecessaryFromFinalizeHandlerWithOptionalPreUFFVersion:(const unsigned long long *)a0;
- (id)applyStyleSwapTuple:(id)a0;
- (id)buildAxisNonStyle;
- (id)buildChartNonStyle;
- (id)buildLegendNonStyle;
- (id)buildSeriesNonStyle;
- (id)copyWithContext:(id)a0 shallowCopyStyles:(BOOL)a1;
- (id)initForCopyingWithContext:(id)a0;
- (id)initWithContext:(id)a0 chartStyle:(id)a1 legendStyle:(id)a2 valueAxisStyles:(id)a3 categoryAxisStyles:(id)a4 seriesStyles:(id)a5 paragraphStyles:(id)a6 refLineStyle:(id)a7;
- (BOOL)isEquivalentToPreset:(id)a0 outReasons:(id *)a1;
- (id)paragraphStyleAtIndex:(unsigned long long)a0;
- (id)presetByAdoptingStylesheet:(id)a0 withMapper:(id)a1 paragraphStyles:(id)a2;
- (id)styleOwnerFromSwapType:(int)a0 andIndex:(unsigned long long)a1;

@end
