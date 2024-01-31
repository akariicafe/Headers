@class NSArray, NSString, BMSiriRemembersFieldFieldValueBasicValue;

@interface BMSiriRemembersFieldFieldValue : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSArray *valueSequence;
@property (readonly, nonatomic) NSArray *valueDictionary;
@property (readonly, nonatomic) BMSiriRemembersFieldFieldValueBasicValue *value;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)columns;
+ (id)validKeyPaths;
+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;

- (id)initByReadFrom:(id)a0;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)serialize;
- (void)writeTo:(id)a0;
- (id)jsonDictionary;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)_valueDictionaryJSONArray;
- (id)_valueSequenceJSONArray;
- (id)initWithValueSequence:(id)a0 valueDictionary:(id)a1 value:(id)a2;

@end
