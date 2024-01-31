@class NSData, NSString;

@interface _CPMailRankingSignalsForFeedback : PBCodable <_CPMailRankingSignalsForFeedback, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL wasReorderedByRecency;
@property (nonatomic) unsigned long long numEngagements;
@property (nonatomic) unsigned long long numDaysEngagedLast30Days;
@property (nonatomic) int averageEngagementAgeLast7Days;
@property (nonatomic) int averageEngagementAgeLast14Days;
@property (nonatomic) int averageEngagementAgeLast21Days;
@property (nonatomic) int averageEngagementAgeLast30Days;
@property (nonatomic) unsigned long long daysSinceReceipt;
@property (nonatomic) float l1Score;
@property (nonatomic) float l2Score;
@property (nonatomic) BOOL isFlagged;
@property (nonatomic) BOOL isRepliedTo;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;

@end
