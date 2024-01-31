@class NSString;

@interface NTPBShareSheetIapFail : PBCodable <NSCopying> {
    struct { unsigned char failureReason : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasFailedIapId;
@property (retain, nonatomic) NSString *failedIapId;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) int failureReason;
@property (readonly, nonatomic) BOOL hasArticleId;
@property (retain, nonatomic) NSString *articleId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
