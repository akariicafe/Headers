@class NSString;

@interface NTPBFeedCellHostViewExposure : PBCodable <NSCopying> {
    struct { unsigned char areaPresentationReason : 1; unsigned char feedCellHostType : 1; unsigned char userAction : 1; unsigned char pickFavsButtonExposed : 1; } _has;
}

@property (nonatomic) BOOL hasFeedCellHostType;
@property (nonatomic) int feedCellHostType;
@property (nonatomic) BOOL hasAreaPresentationReason;
@property (nonatomic) int areaPresentationReason;
@property (readonly, nonatomic) BOOL hasTopicFeedId;
@property (retain, nonatomic) NSString *topicFeedId;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (readonly, nonatomic) BOOL hasCampaignType;
@property (retain, nonatomic) NSString *campaignType;
@property (readonly, nonatomic) BOOL hasCreativeId;
@property (retain, nonatomic) NSString *creativeId;
@property (nonatomic) BOOL hasPickFavsButtonExposed;
@property (nonatomic) BOOL pickFavsButtonExposed;
@property (nonatomic) BOOL hasUserAction;
@property (nonatomic) int userAction;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)areaPresentationReasonAsString:(int)a0;
- (int)StringAsAreaPresentationReason:(id)a0;
- (int)StringAsFeedCellHostType:(id)a0;
- (id)feedCellHostTypeAsString:(int)a0;

@end
