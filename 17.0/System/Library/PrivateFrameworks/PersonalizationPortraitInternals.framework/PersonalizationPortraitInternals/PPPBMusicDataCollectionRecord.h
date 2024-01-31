@class NSString;

@interface PPPBMusicDataCollectionRecord : PBCodable <NSCopying> {
    struct { unsigned char quantizedScore : 1; unsigned char secondsFromUnixEpoch : 1; unsigned char algorithm : 1; unsigned char mediaType : 1; unsigned char type : 1; } _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type;
@property (readonly, nonatomic) BOOL hasLabel;
@property (retain, nonatomic) NSString *label;
@property (nonatomic) BOOL hasSecondsFromUnixEpoch;
@property (nonatomic) double secondsFromUnixEpoch;
@property (nonatomic) BOOL hasQuantizedScore;
@property (nonatomic) double quantizedScore;
@property (readonly, nonatomic) BOOL hasSourceBundleId;
@property (retain, nonatomic) NSString *sourceBundleId;
@property (readonly, nonatomic) BOOL hasMediaId;
@property (retain, nonatomic) NSString *mediaId;
@property (nonatomic) BOOL hasMediaType;
@property (nonatomic) int mediaType;
@property (nonatomic) BOOL hasAlgorithm;
@property (nonatomic) int algorithm;

+ (id)options;

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

@end
