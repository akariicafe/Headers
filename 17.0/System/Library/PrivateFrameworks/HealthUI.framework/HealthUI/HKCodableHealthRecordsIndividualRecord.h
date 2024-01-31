@class NSString, NSMutableArray;

@interface HKCodableHealthRecordsIndividualRecord : PBCodable <NSCopying> {
    struct APPLE_HKCodableHealthRecordsIndividualRecord_1 { unsigned char dateData : 1; } _has;
}

@property (retain, nonatomic) NSMutableArray *codes;
@property (readonly, nonatomic) BOOL hasRecordTitle;
@property (retain, nonatomic) NSString *recordTitle;
@property (nonatomic) BOOL hasDateData;
@property (nonatomic) double dateData;
@property (retain, nonatomic) NSMutableArray *valueWithRanges;
@property (readonly, nonatomic) BOOL hasTextualValue;
@property (retain, nonatomic) NSString *textualValue;
@property (readonly, nonatomic) BOOL hasUcumUnitString;
@property (retain, nonatomic) NSString *ucumUnitString;
@property (readonly, nonatomic) BOOL hasProviderURI;
@property (retain, nonatomic) NSString *providerURI;
@property (readonly, nonatomic) BOOL hasRecordUUID;
@property (retain, nonatomic) NSString *recordUUID;

+ (Class)codeType;
+ (Class)valueWithRangeType;

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
- (void)addCode:(id)a0;
- (void)addValueWithRange:(id)a0;
- (void)clearCodes;
- (void)clearValueWithRanges;
- (id)codeAtIndex:(unsigned long long)a0;
- (unsigned long long)codesCount;
- (id)valueWithRangeAtIndex:(unsigned long long)a0;
- (unsigned long long)valueWithRangesCount;

@end
