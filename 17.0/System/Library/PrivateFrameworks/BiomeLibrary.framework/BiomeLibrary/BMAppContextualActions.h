@class NSString, NSArray;

@interface BMAppContextualActions : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *appName;
@property (readonly, nonatomic) NSString *actionName;
@property (readonly, nonatomic) NSArray *content;
@property (readonly, nonatomic) NSArray *parameter;
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
- (id)_contentJSONArray;
- (id)_parameterJSONArray;
- (id)initWithIdentifier:(id)a0 appName:(id)a1 actionName:(id)a2 content:(id)a3 parameter:(id)a4;

@end
