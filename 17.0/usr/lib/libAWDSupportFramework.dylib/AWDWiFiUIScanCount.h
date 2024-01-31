@class NSString;

@interface AWDWiFiUIScanCount : PBCodable <NSCopying> {
    struct { unsigned char max : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasSection;
@property (retain, nonatomic) NSString *section;
@property (nonatomic) BOOL hasMax;
@property (nonatomic) unsigned int max;

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

@end
