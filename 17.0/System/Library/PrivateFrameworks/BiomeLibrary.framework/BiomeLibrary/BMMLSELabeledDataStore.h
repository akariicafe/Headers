@class NSString, NSArray;

@interface BMMLSELabeledDataStore : BMEventBase <BMStoreData>

@property (readonly, nonatomic) NSString *itemIdentifier;
@property (readonly, nonatomic) unsigned int featureVersion;
@property (nonatomic) BOOL hasFeatureVersion;
@property (readonly, nonatomic) NSArray *featureVector;
@property (readonly, nonatomic) NSString *deviceIdentifier;
@property (readonly, nonatomic) BOOL isPositiveLabeled;
@property (nonatomic) BOOL hasIsPositiveLabeled;
@property (readonly, nonatomic) unsigned int labelingPolicyVersion;
@property (nonatomic) BOOL hasLabelingPolicyVersion;
@property (readonly, nonatomic) int labelingEvidence;
@property (readonly, nonatomic) NSString *sharingEventUID;
@property (readonly, nonatomic) NSString *configurationInfo;
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
- (id)_featureVectorJSONArray;
- (id)initWithItemIdentifier:(id)a0 featureVersion:(id)a1 featureVector:(id)a2 deviceIdentifier:(id)a3 isPositiveLabeled:(id)a4 labelingPolicyVersion:(id)a5 labelingEvidence:(int)a6 sharingEventUID:(id)a7 configurationInfo:(id)a8;

@end
