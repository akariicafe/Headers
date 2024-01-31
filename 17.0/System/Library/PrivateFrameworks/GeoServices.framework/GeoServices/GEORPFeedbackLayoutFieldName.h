@class GEORPIncidentField;

@interface GEORPFeedbackLayoutFieldName : PBCodable <NSCopying> {
    GEORPIncidentField *_incidentField;
    int _addressFieldName;
    int _curatedCollectionFieldName;
    int _groundviewFieldName;
    int _incidentType;
    int _otherFieldName;
    int _poiFieldName;
    int _poiImageCorrectionType;
    int _workflowFieldName;
    struct { unsigned char has_addressFieldName : 1; unsigned char has_curatedCollectionFieldName : 1; unsigned char has_groundviewFieldName : 1; unsigned char has_incidentType : 1; unsigned char has_otherFieldName : 1; unsigned char has_poiFieldName : 1; unsigned char has_poiImageCorrectionType : 1; unsigned char has_workflowFieldName : 1; } _flags;
}

@property (nonatomic) BOOL hasWorkflowFieldName;
@property (nonatomic) int workflowFieldName;
@property (nonatomic) BOOL hasPoiFieldName;
@property (nonatomic) int poiFieldName;
@property (nonatomic) BOOL hasAddressFieldName;
@property (nonatomic) int addressFieldName;
@property (nonatomic) BOOL hasOtherFieldName;
@property (nonatomic) int otherFieldName;
@property (nonatomic) BOOL hasGroundviewFieldName;
@property (nonatomic) int groundviewFieldName;
@property (nonatomic) BOOL hasIncidentType;
@property (nonatomic) int incidentType;
@property (nonatomic) BOOL hasPoiImageCorrectionType;
@property (nonatomic) int poiImageCorrectionType;
@property (nonatomic) BOOL hasCuratedCollectionFieldName;
@property (nonatomic) int curatedCollectionFieldName;
@property (readonly, nonatomic) BOOL hasIncidentField;
@property (retain, nonatomic) GEORPIncidentField *incidentField;

+ (BOOL)isValid:(id)a0;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)readAll:(BOOL)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithJSON:(id)a0;
- (int)StringAsAddressFieldName:(id)a0;
- (int)StringAsCuratedCollectionFieldName:(id)a0;
- (int)StringAsGroundviewFieldName:(id)a0;
- (int)StringAsIncidentType:(id)a0;
- (int)StringAsPoiFieldName:(id)a0;
- (int)StringAsWorkflowFieldName:(id)a0;
- (id)poiImageCorrectionTypeAsString:(int)a0;
- (int)StringAsPoiImageCorrectionType:(id)a0;
- (int)StringAsOtherFieldName:(id)a0;
- (id)addressFieldNameAsString:(int)a0;
- (id)curatedCollectionFieldNameAsString:(int)a0;
- (id)groundviewFieldNameAsString:(int)a0;
- (id)incidentTypeAsString:(int)a0;
- (id)otherFieldNameAsString:(int)a0;
- (id)poiFieldNameAsString:(int)a0;
- (id)workflowFieldNameAsString:(int)a0;

@end
