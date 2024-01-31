@class NSString;

@interface ATXMPBBlendingWidgetRotationEngagementTracker : PBCodable <NSCopying> {
    struct { unsigned char engagementType : 1; unsigned char selectionType : 1; unsigned char stackLocation : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLayoutType;
@property (retain, nonatomic) NSString *layoutType;
@property (nonatomic) BOOL hasEngagementType;
@property (nonatomic) int engagementType;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (retain, nonatomic) NSString *clientModelId;
@property (readonly, nonatomic) BOOL hasWidgetIdentifier;
@property (retain, nonatomic) NSString *widgetIdentifier;
@property (nonatomic) BOOL hasSelectionType;
@property (nonatomic) int selectionType;
@property (readonly, nonatomic) BOOL hasHighestConfidenceCategory;
@property (retain, nonatomic) NSString *highestConfidenceCategory;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (retain, nonatomic) NSString *executableType;
@property (readonly, nonatomic) BOOL hasAbGroup;
@property (retain, nonatomic) NSString *abGroup;
@property (nonatomic) BOOL hasStackLocation;
@property (nonatomic) int stackLocation;
@property (readonly, nonatomic) BOOL hasClientModelABGroup;
@property (retain, nonatomic) NSString *clientModelABGroup;

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
- (int)StringAsSelectionType:(id)a0;
- (id)selectionTypeAsString:(int)a0;
- (int)StringAsEngagementType:(id)a0;
- (id)engagementTypeAsString:(int)a0;
- (int)StringAsStackLocation:(id)a0;
- (id)stackLocationAsString:(int)a0;

@end
