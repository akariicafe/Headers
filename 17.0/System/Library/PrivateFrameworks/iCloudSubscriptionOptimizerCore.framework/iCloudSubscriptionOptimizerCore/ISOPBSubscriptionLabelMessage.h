@interface ISOPBSubscriptionLabelMessage : PBCodable <NSCopying> {
    struct { unsigned char minsUntilICloudNotificationOpened : 1; unsigned char label : 1; } _has;
}

@property (nonatomic) BOOL hasMinsUntilICloudNotificationOpened;
@property (nonatomic) long long minsUntilICloudNotificationOpened;
@property (nonatomic) BOOL hasLabel;
@property (nonatomic) int label;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsLabel:(id)a0;
- (id)labelAsString:(int)a0;

@end
