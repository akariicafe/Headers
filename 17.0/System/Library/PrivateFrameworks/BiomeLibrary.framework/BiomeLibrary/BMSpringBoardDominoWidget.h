@class NSString, NSData;

@interface BMSpringBoardDominoWidget : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *uniqueId;
@property (readonly, nonatomic) NSString *extensionBundleId;
@property (readonly, nonatomic) NSString *kind;
@property (readonly, nonatomic) NSString *containerBundleId;
@property (readonly, nonatomic) NSData *intent;
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
- (id)initWithUniqueId:(id)a0 extensionBundleId:(id)a1 kind:(id)a2 containerBundleId:(id)a3 intent:(id)a4;

@end
