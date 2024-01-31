@class NSString;

@interface ATXContextHeuristicsEvent : NSObject <BMStoreData>

@property (readonly, copy, nonatomic) NSString *contextName;
@property (readonly, copy, nonatomic) NSString *contextType;
@property (nonatomic) BOOL isStart;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initWithProto:(id)a0;
- (id)encodeAsProto;
- (id)proto;
- (id)serialize;
- (id)initWithProtoData:(id)a0;
- (id)jsonDictionary;
- (id)json;
- (void).cxx_destruct;
- (id)initWithContextName:(id)a0 contextType:(id)a1 isStart:(BOOL)a2;

@end
