@class NSString;

@interface BLTPBSetNotificationsAlertLevelRequest : PBRequest <NSCopying> {
    struct { unsigned char level : 1; unsigned char mirror : 1; } _has;
}

@property (nonatomic) BOOL hasLevel;
@property (nonatomic) int level;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (retain, nonatomic) NSString *sectionID;
@property (nonatomic) BOOL hasMirror;
@property (nonatomic) BOOL mirror;

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
- (int)StringAsLevel:(id)a0;
- (id)levelAsString:(int)a0;

@end
