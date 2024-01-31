@class NSDictionary;

@interface MRProtobufSerialization : NSObject {
    NSDictionary *_protobufKeyToDictionaryKeyMapping;
}

@property (copy, nonatomic) NSDictionary *dictionaryKeyToProtobufKeyMapping;
@property (retain, nonatomic) Class protobufClass;
@property (copy, nonatomic) id /* block */ dictionaryValueToProtobufValueTransformer;
@property (copy, nonatomic) id /* block */ protobufValueToDictionaryValueTransformer;
@property (copy, nonatomic) id /* block */ dictionaryValueToProtobufPostTransformer;
@property (copy, nonatomic) id /* block */ protobufValueToDictionaryPostTransformer;

- (void).cxx_destruct;
- (id)createDictionaryFromProtobuf:(id)a0;
- (id)createProtobufFromDictionary:(id)a0;

@end
