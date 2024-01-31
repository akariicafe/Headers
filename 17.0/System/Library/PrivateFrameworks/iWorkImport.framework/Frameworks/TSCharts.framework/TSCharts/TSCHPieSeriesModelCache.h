@class TSCHChartModel, NSString, TSDShadow, TSCHChartInfo, TSCHChartAxis, TSDFill, TSWPParagraphStyle, TSDStroke, TSCHChartSeries;

@interface TSCHPieSeriesModelCache : NSObject {
    TSCHChartModel *_chartModel;
    TSCHChartInfo *_chartInfo;
    BOOL _isSingleCircleSpecialCase;
    TSCHChartSeries *_singleCircleSeriesElement;
    unsigned long long _numberOfSeries;
    double _currentSeriesAngleSweep;
}

@property (readonly) TSCHChartAxis *axis;
@property (readonly, weak) TSCHChartSeries *series;
@property (readonly) unsigned long long seriesIndex;
@property (readonly) double totalValue;
@property (readonly) double seriesAxisValue;
@property (readonly) double startAngle;
@property (readonly) double midAngle;
@property (readonly) double endAngle;
@property (readonly) double percentage;
@property (readonly) BOOL nullData;
@property (readonly) float wedgeExplosion;
@property (readonly) float labelExplosion;
@property (readonly) float effectiveWedgeExplosion;
@property (readonly) float effectiveLabelExplosion;
@property (readonly) BOOL shouldRenderLabel;
@property (readonly) BOOL shouldRenderCalloutLine;
@property (readonly) NSString *labelString;
@property (readonly) NSString *valueLabelString;
@property (readonly) NSString *seriesNameLabelString;
@property (readonly) TSWPParagraphStyle *paragraphStyle;
@property (readonly) TSDShadow *seriesShadow;
@property (readonly) TSDStroke *seriesStroke;
@property (readonly) TSDFill *seriesFill;
@property (readonly) BOOL groupedShadow;
@property (readonly) double seriesOpacity;

- (void).cxx_destruct;
- (id)initWithPrior:(id)a0 orChartModel:(id)a1 forSeries:(unsigned long long)a2;
- (id)labelStringForType:(long long)a0;
- (id)labelStringWithValueLabelString:(id)a0 seriesNameLabelString:(id)a1;

@end
