@class NSUUID, NSArray, NSString, NSDate;

@interface ATXLockscreenEvent : NSObject <ATXProactiveSuggestionUIInteractionProtocol> {
    double _absoluteDate;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSDate *date;
@property (nonatomic) int eventType;
@property (retain, nonatomic) NSUUID *blendingCacheId;
@property (retain, nonatomic) NSArray *suggestionIds;
@property (readonly, nonatomic) unsigned char consumerSubTypeForUIStream;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

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
- (void).cxx_destruct;
- (id)blendingUICacheUpdateUUIDForUICacheConsumerSubType:(unsigned char)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAbsoluteDate:(double)a0 eventType:(int)a1 blendingCacheId:(id)a2 suggestionIds:(id)a3;
- (id)initWithDate:(id)a0 eventType:(int)a1 blendingCacheId:(id)a2 suggestionIds:(id)a3;
- (BOOL)isEqualToATXLockscreenEvent:(id)a0;

@end
