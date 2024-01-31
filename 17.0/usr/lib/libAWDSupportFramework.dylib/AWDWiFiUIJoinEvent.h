@class NSString, NSMutableArray;

@interface AWDWiFiUIJoinEvent : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char error : 1; unsigned char securityType : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (readonly, nonatomic) BOOL hasProcess;
@property (retain, nonatomic) NSString *process;
@property (nonatomic) BOOL hasSecurityType;
@property (nonatomic) unsigned int securityType;
@property (nonatomic) BOOL hasError;
@property (nonatomic) unsigned int error;
@property (readonly, nonatomic) BOOL hasSection;
@property (retain, nonatomic) NSString *section;
@property (retain, nonatomic) NSMutableArray *sectionCounts;

+ (Class)sectionCountsType;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addSectionCounts:(id)a0;
- (void)clearSectionCounts;
- (id)sectionCountsAtIndex:(unsigned long long)a0;
- (unsigned long long)sectionCountsCount;

@end
