@class NSDictionary;

@interface _CDEventStreams : NSObject

@property (nonatomic) BOOL allStreamsLoaded;
@property (readonly, nonatomic) NSDictionary *allEventStreams;
@property (readonly, nonatomic) NSDictionary *allKBEventStreams;

+ (id)sharedInstance;
+ (void)loadAllEventStreams;
+ (id)eventStreamPropertiesForEventStream:(id)a0;
+ (id)privacyPolicyForEventStreamName:(id)a0;
+ (id)eventStreamPropertiesForKBName:(id)a0;
+ (id)eventStreamPropertiesForName:(id)a0;
+ (id)rateLimiterForEventStreamName:(id)a0;
+ (id)eventStreamForName:(id)a0;
+ (id)ephemeralitySchedule;

- (id)init;
- (id)_eventStreamForName:(id)a0 orKBName:(id)a1;
- (void)setAllKBEventStreams:(id)a0;
- (void).cxx_destruct;
- (void)setAllEventStreams:(id)a0;

@end
