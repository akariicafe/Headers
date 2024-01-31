@class NSString, NSDictionary, NSData, NSNumber;

@interface SFMailRankingSignals : NSObject <SFMailRankingSignals, NSSecureCoding, NSCopying> {
    struct { unsigned char wasReorderedByRecency : 1; unsigned char numEngagements : 1; unsigned char numDaysEngagedLast30Days : 1; unsigned char daysSinceReceipt : 1; unsigned char isFlagged : 1; unsigned char isRepliedTo : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL wasReorderedByRecency;
@property (nonatomic) unsigned long long numEngagements;
@property (nonatomic) unsigned long long numDaysEngagedLast30Days;
@property (copy, nonatomic) NSNumber *averageEngagementAgeLast7Days;
@property (copy, nonatomic) NSNumber *averageEngagementAgeLast14Days;
@property (copy, nonatomic) NSNumber *averageEngagementAgeLast21Days;
@property (copy, nonatomic) NSNumber *averageEngagementAgeLast30Days;
@property (nonatomic) unsigned long long daysSinceReceipt;
@property (copy, nonatomic) NSNumber *l1Score;
@property (copy, nonatomic) NSNumber *l2Score;
@property (nonatomic) BOOL isFlagged;
@property (nonatomic) BOOL isRepliedTo;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithProtobuf:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)hasDaysSinceReceipt;
- (BOOL)hasIsFlagged;
- (BOOL)hasIsRepliedTo;
- (BOOL)hasNumDaysEngagedLast30Days;
- (BOOL)hasNumEngagements;
- (BOOL)hasWasReorderedByRecency;

@end
