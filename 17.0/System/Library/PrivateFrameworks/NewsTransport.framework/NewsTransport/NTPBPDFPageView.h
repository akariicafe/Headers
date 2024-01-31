@class NTPBIssueViewData, NTPBIssueData, NTPBIssueExposureData, NSString, NTPBChannelData;

@interface NTPBPDFPageView : PBCodable <NSCopying> {
    struct { int *list; unsigned long long count; unsigned long long size; } _pageIndices;
    struct { unsigned char groupType : 1; unsigned char pageCount : 1; unsigned char paidSubscriberToFeedType : 1; unsigned char paidSubscriptionConversionPointType : 1; unsigned char parentFeedType : 1; unsigned char adSupportedChannel : 1; unsigned char isFreeIssue : 1; unsigned char isPaidSubscriberToSourceChannel : 1; unsigned char viewFromNotificationDirectOpen : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasIssueData;
@property (retain, nonatomic) NTPBIssueData *issueData;
@property (readonly, nonatomic) BOOL hasIssueExposureData;
@property (retain, nonatomic) NTPBIssueExposureData *issueExposureData;
@property (readonly, nonatomic) BOOL hasIssueViewData;
@property (retain, nonatomic) NTPBIssueViewData *issueViewData;
@property (readonly, nonatomic) unsigned long long pageIndicesCount;
@property (readonly, nonatomic) int *pageIndices;
@property (nonatomic) BOOL hasPageCount;
@property (nonatomic) int pageCount;
@property (nonatomic) BOOL hasIsFreeIssue;
@property (nonatomic) BOOL isFreeIssue;
@property (nonatomic) BOOL hasParentFeedType;
@property (nonatomic) int parentFeedType;
@property (readonly, nonatomic) BOOL hasParentFeedId;
@property (retain, nonatomic) NSString *parentFeedId;
@property (readonly, nonatomic) BOOL hasSourceChannelId;
@property (retain, nonatomic) NSString *sourceChannelId;
@property (nonatomic) BOOL hasAdSupportedChannel;
@property (nonatomic) BOOL adSupportedChannel;
@property (nonatomic) BOOL hasIsPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL isPaidSubscriberToSourceChannel;
@property (nonatomic) BOOL hasGroupType;
@property (nonatomic) int groupType;
@property (readonly, nonatomic) BOOL hasCampaignId;
@property (retain, nonatomic) NSString *campaignId;
@property (nonatomic) BOOL hasViewFromNotificationDirectOpen;
@property (nonatomic) BOOL viewFromNotificationDirectOpen;
@property (readonly, nonatomic) BOOL hasNotificationId;
@property (retain, nonatomic) NSString *notificationId;
@property (readonly, nonatomic) BOOL hasChannelData;
@property (retain, nonatomic) NTPBChannelData *channelData;
@property (nonatomic) BOOL hasPaidSubscriberToFeedType;
@property (nonatomic) int paidSubscriberToFeedType;
@property (nonatomic) BOOL hasPaidSubscriptionConversionPointType;
@property (nonatomic) int paidSubscriptionConversionPointType;
@property (readonly, nonatomic) BOOL hasLanguage;
@property (retain, nonatomic) NSString *language;
@property (readonly, nonatomic) BOOL hasReferringSourceApplication;
@property (retain, nonatomic) NSString *referringSourceApplication;
@property (readonly, nonatomic) BOOL hasReferringUrl;
@property (retain, nonatomic) NSString *referringUrl;

- (unsigned long long)hash;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)StringAsPaidSubscriberToFeedType:(id)a0;
- (int)StringAsPaidSubscriptionConversionPointType:(id)a0;
- (int)StringAsGroupType:(id)a0;
- (int)StringAsParentFeedType:(id)a0;
- (void)addPageIndices:(int)a0;
- (void)clearPageIndices;
- (id)groupTypeAsString:(int)a0;
- (int)pageIndicesAtIndex:(unsigned long long)a0;
- (id)paidSubscriberToFeedTypeAsString:(int)a0;
- (id)paidSubscriptionConversionPointTypeAsString:(int)a0;
- (id)parentFeedTypeAsString:(int)a0;
- (void)setPageIndices:(int *)a0 count:(unsigned long long)a1;

@end
