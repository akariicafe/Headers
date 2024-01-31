@class NSString;
@protocol CNVCardSerializationStorage;

@interface CNVCardLineSerializationStrategyImpl : NSObject <CNVCardLineSerialization> {
    id<CNVCardSerializationStorage> _storage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serializerWithStorage:(id)a0;

- (id)initWithStorage:(id)a0;
- (void)serializeString:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)estimatedDataLength;
- (void)serializeData:(id)a0;
- (void)serializeParameters:(id)a0;
- (id)insertionMarker;
- (BOOL)canSerializeArray:(id)a0;
- (BOOL)canSerializeData:(id)a0;
- (BOOL)canSerializeString:(id)a0;
- (void)insertLine:(id)a0 atMarker:(id)a1;
- (void)serializeArray:(id)a0 withItemSeparator:(id)a1;
- (void)serializeGroupedLines:(id)a0 withGroupingName:(id)a1;
- (void)serializeGroupingName:(id)a0;
- (void)serializeLine:(id)a0;
- (void)serializeName:(id)a0;
- (void)serializeOpaqueValue:(id)a0;
- (void)serializeVersionPlaceholder;
- (void)willSerializeValue;

@end
