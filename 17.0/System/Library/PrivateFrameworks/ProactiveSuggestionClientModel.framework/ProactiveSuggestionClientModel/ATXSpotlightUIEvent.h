@class NSString;

@interface ATXSpotlightUIEvent : NSObject <BMStoreData>

@property (copy, nonatomic) NSString *suggestionUniqueId;
@property (copy, nonatomic) NSString *suggestionType;
@property (copy, nonatomic) NSString *suggestionSubtype;
@property (copy, nonatomic) NSString *suggestionContext;
@property (nonatomic) long long eventType;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)stringForATXSpotlightUIEventType:(long long)a0;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)jsonDictionary;
- (id)json;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0 suggestionUniqueId:(id)a1 suggestionType:(id)a2 suggestionSubtype:(id)a3 suggestionContext:(id)a4;

@end
