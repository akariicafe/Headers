@class TSUIntToIntDictionary, TSCHChartInfo;
@protocol TSCHNotifyOnModify;

@interface TSCHChartMediator : NSObject <NSCopying> {
    TSUIntToIntDictionary *_remoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *_gridSeriesIndexForRemoteSeriesIndex;
}

@property (weak, nonatomic) TSCHChartInfo *chartInfo;
@property (weak, nonatomic) id<TSCHNotifyOnModify> objectToNotify;
@property (readonly, nonatomic) BOOL isPhantom;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) unsigned long long referenceType;

+ (id)propertiesThatInvalidateMediator;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEditing;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithContext:(id)a0;
- (void)saveToArchive:(void *)a0;
- (void)willModify;
- (void)loadFromArchive:(const void *)a0;
- (id)categoryLabelFormulas;
- (id)commandSetCategoryName:(id)a0 forCategoryIndex:(unsigned long long)a1;
- (id)commandSetSeriesName:(id)a0 forSeriesIndex:(unsigned long long)a1;
- (id)commandToChangeCategoryLabelFormulas:(id)a0;
- (id)commandToSetChartGridDirection:(int)a0 documentRoot:(id)a1;
- (id)commandToSetErrorBarCustomFormula:(id)a0 seriesIndex:(unsigned long long)a1 dataType:(int)a2;
- (id)commandToSetNewSeriesIndex:(unsigned long long)a0 forSeriesIndex:(unsigned long long)a1;
- (id)commandToSetSeriesDataFormula:(id)a0 seriesDimension:(id)a1;
- (id)commandToSetSeriesNameFormula:(id)a0 seriesIndex:(unsigned long long)a1;
- (id)dataFormatterForAxis:(id)a0 documentRoot:(id)a1;
- (id)dataFormatterForSeries:(id)a0 index:(unsigned long long)a1 axisType:(int)a2 documentRoot:(id)a3;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)a0 dataType:(int)a1;
- (BOOL)hasCategoryReferences;
- (BOOL)hasTractReference;
- (id)initWithChartInfo:(id)a0;
- (void)invalidateAndSynchronizeMediator;
- (unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)a0;
- (unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)a0;
- (void)pauseCalculationEngine;
- (BOOL)preferSeriesToValues;
- (void)resumeCalculationEngine;
- (id)seriesDataFormulaForSeriesDimension:(id)a0;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)a0;
- (void)updateGridWithSpec:(struct { unsigned long long x0; void /* function */ *x1; void *x2; })a0;
- (id)p_errorBarDataForSeries:(unsigned long long)a0 withSpec:(struct { unsigned long long x0; void /* function */ *x1; void *x2; })a1 updateType:(int)a2;

@end
