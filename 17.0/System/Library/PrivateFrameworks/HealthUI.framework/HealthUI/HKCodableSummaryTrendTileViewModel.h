@class NSString, HKCodableCellHeaderViewModel, HKCodableSummaryTrendLineViewModel, NSMutableArray;

@interface HKCodableSummaryTrendTileViewModel : PBCodable <NSCopying> {
    struct APPLE_HKCodableSummaryTrendTileViewModel_1 { unsigned char discoveryDateData : 1; unsigned char originalEventDateData : 1; unsigned char diagramStyle : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTrendDescription;
@property (retain, nonatomic) NSString *trendDescription;
@property (readonly, nonatomic) BOOL hasChangeTypeRawValue;
@property (retain, nonatomic) NSString *changeTypeRawValue;
@property (nonatomic) BOOL hasDiagramStyle;
@property (nonatomic) int diagramStyle;
@property (readonly, nonatomic) BOOL hasObjectTypeIdentifier;
@property (retain, nonatomic) NSString *objectTypeIdentifier;
@property (readonly, nonatomic) BOOL hasCoveredDateRangeRawValue;
@property (retain, nonatomic) NSString *coveredDateRangeRawValue;
@property (readonly, nonatomic) BOOL hasBaseTrendLine;
@property (retain, nonatomic) HKCodableSummaryTrendLineViewModel *baseTrendLine;
@property (readonly, nonatomic) BOOL hasChangeTrendLine;
@property (retain, nonatomic) HKCodableSummaryTrendLineViewModel *changeTrendLine;
@property (retain, nonatomic) NSMutableArray *visualizationPoints;
@property (readonly, nonatomic) BOOL hasNotificationIdentifier;
@property (retain, nonatomic) NSString *notificationIdentifier;
@property (nonatomic) BOOL hasDiscoveryDateData;
@property (nonatomic) double discoveryDateData;
@property (nonatomic) BOOL hasOriginalEventDateData;
@property (nonatomic) double originalEventDateData;
@property (readonly, nonatomic) BOOL hasTrendDescriptionSharingPreviewOverride;
@property (retain, nonatomic) NSString *trendDescriptionSharingPreviewOverride;
@property (readonly, nonatomic) BOOL hasCellHeaderViewModel;
@property (retain, nonatomic) HKCodableCellHeaderViewModel *cellHeaderViewModel;

+ (Class)visualizationPointsType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsDiagramStyle:(id)a0;
- (void)addVisualizationPoints:(id)a0;
- (void)clearVisualizationPoints;
- (id)diagramStyleAsString:(int)a0;
- (id)visualizationPointsAtIndex:(unsigned long long)a0;
- (unsigned long long)visualizationPointsCount;

@end
