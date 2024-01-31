@class NSString;

@interface TSCHSelectionPathType : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *type;

+ (id)seriesType;
+ (id)selectionPathTypeWithType:(id)a0 name:(id)a1;
+ (id)seriesLabelType;
+ (id)trendLineR2Type;
+ (id)axisLabelsType;
+ (id)axisLineType;
+ (id)axisTitleType;
+ (id)categoryAxisType;
+ (id)chartBodyType;
+ (id)chartDataSetNameType;
+ (id)chartTitleType;
+ (id)errorBarType;
+ (id)gridLineType;
+ (id)legendSeriesNameType;
+ (id)legendTrendLineNameType;
+ (id)legendType;
+ (id)referenceLineLabelType;
+ (id)referenceLineType;
+ (id)referenceLineValueLabelType;
+ (id)seriesEditModeType;
+ (id)seriesSymbolType;
+ (id)seriesValueLabelType;
+ (id)seriesValueSummaryLabelType;
+ (id)trendLineEquationType;
+ (id)trendLineType;
+ (id)valueAxisType;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithArchive:(const void *)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithType:(id)a0 name:(id)a1;
- (void)saveToArchive:(void *)a0;
- (BOOL)canApplyChartStyleWithDescription:(id)a0;
- (BOOL)canApplyParagraphStyle;
- (BOOL)canApplyShapeStyle;

@end
