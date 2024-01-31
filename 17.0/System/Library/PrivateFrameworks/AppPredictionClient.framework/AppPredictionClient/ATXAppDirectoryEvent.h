@class NSString, NSUUID, NSArray, NSDate, NSNumber, ATXAppDirectoryEventMetadata;

@interface ATXAppDirectoryEvent : NSObject <NSSecureCoding, ATXProtoBufWrapper, ATXProactiveSuggestionUIInteractionProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) unsigned long long eventType;
@property (retain, nonatomic) NSNumber *categoryID;
@property (retain, nonatomic) NSNumber *categoryIndex;
@property (retain, nonatomic) NSString *bundleId;
@property (retain, nonatomic) NSNumber *bundleIndex;
@property (retain, nonatomic) NSNumber *searchQueryLength;
@property (retain, nonatomic) NSNumber *searchTab;
@property (retain, nonatomic) NSUUID *blendingCacheUUID;
@property (retain, nonatomic) NSArray *shownSuggestionIds;
@property (retain, nonatomic) NSArray *engagedSuggestionIds;
@property (retain, nonatomic) ATXAppDirectoryEventMetadata *metadata;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)_objectForKey:(id)a0 classType:(Class)a1 fromMetadata:(id)a2;
+ (id)appDirectoryEventWithEventType:(unsigned long long)a0 metadata:(id)a1;

- (id)initWithProto:(id)a0;
- (id)init;
- (id)sessionProcessingOptionsForSessionType:(long long)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)jsonDict;
- (void)updateUIFeedbackSession:(id)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)sessionIdentifierForSessionType:(long long)a0 uiCacheConsumerSubType:(unsigned char)a1;
- (id)json;
- (void).cxx_destruct;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAbsoluteDate:(double)a0 eventType:(unsigned long long)a1 categoryID:(id)a2 categoryIndex:(id)a3 bundleId:(id)a4 bundleIndex:(id)a5 searchQueryLength:(id)a6 searchTab:(id)a7 blendingCacheUUID:(id)a8 shownSuggestionIds:(id)a9 engagedSuggestionIds:(id)a10 metadata:(id)a11;
- (id)initWithDate:(id)a0 eventType:(unsigned long long)a1 categoryID:(id)a2 categoryIndex:(id)a3 bundleId:(id)a4 bundleIndex:(id)a5 searchQueryLength:(id)a6 searchTab:(id)a7 blendingCacheUUID:(id)a8 shownSuggestionIds:(id)a9 engagedSuggestionIds:(id)a10 metadata:(id)a11;
- (BOOL)isEqualToATXAppDirectoryEvent:(id)a0;

@end
