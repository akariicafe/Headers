@class NSString, NSArray, NSDate;

@interface BMWalletPaymentsCommerceUserProofingResult : BMEventBase <BMStoreData> {
    BOOL _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) NSString *age;
@property (readonly, nonatomic) NSString *gender;
@property (readonly, nonatomic) NSString *skinTone;
@property (readonly, nonatomic) NSString *ethnicity;
@property (readonly, nonatomic) NSString *deviceLanguage;
@property (readonly, nonatomic) NSString *proofingDecision;
@property (readonly, nonatomic) NSString *issuer;
@property (readonly, nonatomic) NSString *livenessAssessment;
@property (readonly, nonatomic) NSString *gestureAssessment;
@property (readonly, nonatomic) NSArray *axSettings;
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
- (id)_axSettingsJSONArray;
- (id)initWithAbsoluteTimestamp:(id)a0 age:(id)a1 gender:(id)a2 skinTone:(id)a3 ethnicity:(id)a4 deviceLanguage:(id)a5 proofingDecision:(id)a6 issuer:(id)a7 livenessAssessment:(id)a8 gestureAssessment:(id)a9 axSettings:(id)a10;

@end
