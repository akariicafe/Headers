@class NSString, HMEEvent;

@interface HMEEventInfo : NSObject

@property (class, readonly) unsigned long long topicAndMetadataMaxSizeInBytes;

@property (readonly, nonatomic) HMEEvent *event;
@property (readonly, copy, nonatomic) NSString *topic;

+ (id)eventsMapFromEventInfos:(id)a0;
+ (id)fromProtobuff:(id)a0;
+ (id)eventInfoFromProtoData:(id)a0;
+ (id)eventsMapFromProtoEvents:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithEvent:(id)a0 topic:(id)a1;
- (id)pbEventInfo;

@end
