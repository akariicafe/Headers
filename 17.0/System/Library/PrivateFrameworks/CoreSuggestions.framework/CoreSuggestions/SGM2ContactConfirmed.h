@class NSString;

@interface SGM2ContactConfirmed : PBCodable <NSCopying> {
    struct { unsigned char app : 1; unsigned char extracted : 1; unsigned char extractionModelVersion : 1; unsigned char type : 1; unsigned char uiType : 1; unsigned char firstNameAdj : 1; unsigned char isUpdate : 1; unsigned char lastNameAdj : 1; unsigned char middleNameAdj : 1; unsigned char selfId : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (retain, nonatomic) NSString *key;
@property (nonatomic) BOOL hasApp;
@property (nonatomic) int app;
@property (nonatomic) BOOL hasFirstNameAdj;
@property (nonatomic) BOOL firstNameAdj;
@property (nonatomic) BOOL hasLastNameAdj;
@property (nonatomic) BOOL lastNameAdj;
@property (nonatomic) BOOL hasMiddleNameAdj;
@property (nonatomic) BOOL middleNameAdj;
@property (nonatomic) BOOL hasIsUpdate;
@property (nonatomic) BOOL isUpdate;
@property (nonatomic) BOOL hasExtracted;
@property (nonatomic) int extracted;
@property (nonatomic) BOOL hasExtractionModelVersion;
@property (nonatomic) unsigned int extractionModelVersion;
@property (nonatomic) BOOL hasSelfId;
@property (nonatomic) BOOL selfId;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasUiType;
@property (nonatomic) int uiType;

- (unsigned long long)hash;
- (id)typeAsString:(int)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsType:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsExtracted:(id)a0;
- (id)uiTypeAsString:(int)a0;
- (int)StringAsUiType:(id)a0;
- (int)StringAsApp:(id)a0;
- (id)appAsString:(int)a0;
- (id)extractedAsString:(int)a0;

@end
