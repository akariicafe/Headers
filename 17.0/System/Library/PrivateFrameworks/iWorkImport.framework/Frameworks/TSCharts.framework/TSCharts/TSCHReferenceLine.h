@class TSCHChartModel, NSString, TSCHChartAxis, TSCHChartAxisID, NSUUID, TSCHReferenceLineStyle, TSCHReferenceLineNonStyle;

@interface TSCHReferenceLine : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHStyleOwning> {
    TSCHChartModel *_model;
    TSCHReferenceLineStyle *_style;
    TSCHReferenceLineNonStyle *_nonStyle;
    unsigned long long _styleSwapIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long styleSwapIndex;
@property (readonly, copy, nonatomic) TSCHChartAxisID *axisID;
@property (readonly, weak, nonatomic) TSCHChartAxis *axis;
@property (readonly, copy, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) BOOL lineShowing;
@property (readonly, nonatomic) BOOL labelShowing;
@property (readonly, nonatomic) BOOL valueLabelShowing;
@property (readonly, nonatomic) unsigned long long refLineType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)axisIDFromStyleSwapOrStyleOwnerIndex:(unsigned long long)a0;
+ (id)defaultNonStyleWithContext:(id)a0 referenceLineType:(unsigned long long)a1 axis:(id)a2;
+ (unsigned long long)maxNumberOfReferenceLines;
+ (unsigned long long)maxNumberOfReferenceLinesOfType:(unsigned long long)a0;
+ (id)p_lineLabelForType:(unsigned long long)a0;
+ (unsigned long long)refLineIndexFromStyleSwapOrStyleOwnerIndex:(unsigned long long)a0;
+ (unsigned char)styleOwnerPathType;
+ (unsigned long long)styleSwapOrStyleOwnerIndexFromAxisID:(id)a0 refLineIndex:(unsigned long long)a1;

- (id)model;
- (id)context;
- (id)valueForProperty:(int)a0;
- (id)localizedTypeName;
- (void).cxx_destruct;
- (id)style;
- (id)defaultProperties;
- (id)drawableInfo;
- (id)chartInfo;
- (int)intValueForProperty:(int)a0 defaultValue:(int)a1;
- (id)objectValueForProperty:(int)a0;
- (BOOL)hasFloatValueForProperty:(int)a0 value:(float *)a1;
- (int)defaultPropertyForGeneric:(int)a0;
- (float)floatValueForProperty:(int)a0 defaultValue:(float)a1;
- (id)g_genericToDefaultPropertyMap;
- (id)g_operationPropertyNameForGenericProperty:(int)a0;
- (BOOL)hasIntValueForProperty:(int)a0 value:(int *)a1;
- (BOOL)hasObjectValueForProperty:(int)a0 value:(id *)a1;
- (id)initWithModel:(id)a0 axisID:(id)a1 index:(unsigned long long)a2 uuid:(id)a3;
- (BOOL)labelShowing;
- (BOOL)lineShowing;
- (id)nonstyle;
- (id)operationPropertyNameFromGenericProperty:(int)a0;
- (id)p_genericToDefaultPropertyMap;
- (unsigned long long)refLineType;
- (double)referenceLineAxisValue;
- (void)setStyle:(id)a0 nonStyle:(id)a1;
- (int)specificPropertyForGeneric:(int)a0;
- (id)swapTuplesForMutations:(id)a0 forImport:(BOOL)a1;
- (id)swapTuplesForParagraphStyleMutations:(id)a0 forReferencingProperty:(int)a1;
- (id)transformedTuplesWithTuple:(id)a0;
- (BOOL)valueLabelShowing;

@end
