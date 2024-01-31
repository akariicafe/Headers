@class NSArray;

@interface PPSCadence : NSObject

@property (readonly) NSArray *cadenceTuples;

+ (id)cadenceEventSBC;
+ (id)cadenceEventXPCWithFrequency:(int)a0;
+ (id)cadenceInit;
+ (id)cadenceInit_EventSBC;
+ (id)cadenceWithJSONObject:(id)a0;
+ (id)cadenceWithProto:(id)a0;
+ (BOOL)isValidCadenceJSON:(id)a0;

- (id)proto;
- (id)json;
- (void).cxx_destruct;
- (id)initWithCadenceTuples:(id)a0;

@end
