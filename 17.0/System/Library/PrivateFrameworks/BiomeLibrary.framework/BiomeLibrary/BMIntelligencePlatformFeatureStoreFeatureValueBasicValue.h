@class NSString;

@interface BMIntelligencePlatformFeatureStoreFeatureValueBasicValue : BMEventBase <BMStoreData>

@property (readonly, nonatomic) long long int_value;
@property (nonatomic) BOOL hasInt_value;
@property (readonly, nonatomic) double double_value;
@property (nonatomic) BOOL hasDouble_value;
@property (readonly, nonatomic) double float_value;
@property (nonatomic) BOOL hasFloat_value;
@property (readonly, nonatomic) NSString *string_value;
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
- (id)initWithInt_value:(id)a0 double_value:(id)a1 float_value:(id)a2 string_value:(id)a3;

@end
