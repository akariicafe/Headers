@interface WFEvent : NSObject

+ (Class)codableEventClass;
+ (id)serializablePropertyTransformers;

- (id)description;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (void)track;
- (id)propertyNames;
- (Class)codableEventClass;
- (id)coreAnalyticsKey;
- (id)serializableEvent;

@end
