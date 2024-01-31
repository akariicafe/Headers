@class NSUUID, NSArray, ATXSharedDigestEngagementTrackingMetrics, ATXDigestTimeline, NSString, ATXUserNotificationDigestBiomeStream;

@interface ATXUserNotificationDigest : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXJSONSerializableProtocol, BMStoreData, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double creationTimestamp;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSArray *messageGroups;
@property (readonly, nonatomic) NSArray *highlightedGroups;
@property (readonly, nonatomic) NSArray *rankedGroups;
@property (readonly, nonatomic) NSArray *appDigests;
@property (readonly, nonatomic) NSArray *globalMarqueeGroups;
@property (copy, nonatomic) ATXSharedDigestEngagementTrackingMetrics *digestEngagementTrackingMetrics;
@property (copy, nonatomic) ATXDigestTimeline *digestTimeline;
@property (copy, nonatomic) NSString *rankerId;
@property (readonly, nonatomic) NSString *modeIdString;
@property (retain, nonatomic) ATXUserNotificationDigestBiomeStream *loggingStream;
@property (readonly, nonatomic) BOOL hasLoggedUpcoming;
@property (readonly, nonatomic) BOOL hasLoggedCollapsed;
@property (readonly, nonatomic) BOOL hasLoggedScheduled;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)getFlattenedGroupsFromAppDigests:(id)a0;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (id)initFromJSON:(id)a0;
- (id)json;
- (void).cxx_destruct;
- (id)jsonRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)logUpcomingView;
- (id)allNotificationIds;
- (BOOL)doesDigestShareContentWithOtherDigest:(id)a0;
- (id)initWithAppDigests:(id)a0 highlightedGroups:(id)a1 messageGroups:(id)a2 rankerId:(id)a3;
- (id)initWithGroups:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithMessageGroups:(id)a0 highlightedGroups:(id)a1 otherGroups:(id)a2 rankerId:(id)a3;
- (id)initWithNotificationArrays:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (id)initWithNotifications:(id)a0 modeId:(id)a1;
- (id)initWithNotifications:(id)a0 modeId:(id)a1 ranker:(id)a2;
- (void)logCollapsedPreview;
- (void)logCollapsedPreviewWithTimestamp:(double)a0;
- (void)logScheduledView;
- (void)logScheduledViewWithTimestamp:(double)a0;
- (void)logUpcomingViewWithTimestamp:(double)a0;
- (id)viewFlattenedGroups;

@end
