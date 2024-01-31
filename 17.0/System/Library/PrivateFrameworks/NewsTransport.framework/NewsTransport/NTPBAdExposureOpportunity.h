@class NSString, NSData;

@interface NTPBAdExposureOpportunity : PBCodable <NSCopying> {
    struct { unsigned char adErrorCode : 1; unsigned char adCreativeType : 1; unsigned char adType : 1; unsigned char durationInFeed : 1; unsigned char errorCode : 1; unsigned char exposureLocationType : 1; unsigned char feedType : 1; unsigned char responseTime : 1; unsigned char screenfulsFromTop : 1; unsigned char isExpanded : 1; unsigned char isFilled : 1; unsigned char isViewable : 1; } _has;
}

@property (nonatomic) BOOL hasIsExpanded;
@property (nonatomic) BOOL isExpanded;
@property (nonatomic) BOOL hasIsFilled;
@property (nonatomic) BOOL isFilled;
@property (readonly, nonatomic) BOOL hasAdSlotId;
@property (retain, nonatomic) NSString *adSlotId;
@property (nonatomic) BOOL hasDurationInFeed;
@property (nonatomic) int durationInFeed;
@property (nonatomic) BOOL hasResponseTime;
@property (nonatomic) int responseTime;
@property (nonatomic) BOOL hasScreenfulsFromTop;
@property (nonatomic) int screenfulsFromTop;
@property (nonatomic) BOOL hasErrorCode;
@property (nonatomic) int errorCode;
@property (nonatomic) BOOL hasIsViewable;
@property (nonatomic) BOOL isViewable;
@property (nonatomic) BOOL hasExposureLocationType;
@property (nonatomic) int exposureLocationType;
@property (nonatomic) BOOL hasFeedType;
@property (nonatomic) int feedType;
@property (readonly, nonatomic) BOOL hasExposureLocationTypeId;
@property (retain, nonatomic) NSString *exposureLocationTypeId;
@property (readonly, nonatomic) BOOL hasAdCreativeId;
@property (retain, nonatomic) NSString *adCreativeId;
@property (readonly, nonatomic) BOOL hasFeedViewExposureId;
@property (retain, nonatomic) NSData *feedViewExposureId;
@property (readonly, nonatomic) BOOL hasArticleViewingSessionId;
@property (retain, nonatomic) NSData *articleViewingSessionId;
@property (readonly, nonatomic) BOOL hasAdOpportunityId;
@property (retain, nonatomic) NSString *adOpportunityId;
@property (readonly, nonatomic) BOOL hasEventId;
@property (retain, nonatomic) NSString *eventId;
@property (nonatomic) BOOL hasAdErrorCode;
@property (nonatomic) long long adErrorCode;
@property (nonatomic) BOOL hasAdType;
@property (nonatomic) int adType;
@property (nonatomic) BOOL hasAdCreativeType;
@property (nonatomic) int adCreativeType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsAdType:(id)a0;
- (int)StringAsAdCreativeType:(id)a0;
- (int)StringAsFeedType:(id)a0;
- (id)adTypeAsString:(int)a0;
- (id)adCreativeTypeAsString:(int)a0;
- (id)feedTypeAsString:(int)a0;

@end
