@class NSString, NSArray, NSDate;

@interface BMSiriRemembersInteraction : BMEventBase <BMStoreData> {
    BOOL _hasRaw_startDate;
    double _raw_startDate;
}

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *appBundleId;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) BOOL isDonatedBySiri;
@property (nonatomic) BOOL hasIsDonatedBySiri;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) double durationInSeconds;
@property (nonatomic) BOOL hasDurationInSeconds;
@property (readonly, nonatomic) NSArray *interactionFields;
@property (readonly, nonatomic) NSString *fields;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) NSString *appIntentInteractionIdentifier;
@property (readonly, nonatomic) int interactionSource;
@property (readonly, nonatomic) long long contentHash;
@property (nonatomic) BOOL hasContentHash;
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
- (id)_interactionFieldsJSONArray;
- (id)initWithIdentifier:(id)a0 type:(id)a1 domain:(id)a2 appBundleId:(id)a3 status:(int)a4 direction:(int)a5 isDonatedBySiri:(id)a6 startDate:(id)a7 durationInSeconds:(id)a8 interactionFields:(id)a9;
- (id)initWithIdentifier:(id)a0 type:(id)a1 domain:(id)a2 appBundleId:(id)a3 status:(int)a4 direction:(int)a5 isDonatedBySiri:(id)a6 startDate:(id)a7 durationInSeconds:(id)a8 interactionFields:(id)a9 fields:(id)a10;
- (id)initWithIdentifier:(id)a0 type:(id)a1 domain:(id)a2 appBundleId:(id)a3 status:(int)a4 direction:(int)a5 isDonatedBySiri:(id)a6 startDate:(id)a7 durationInSeconds:(id)a8 interactionFields:(id)a9 fields:(id)a10 groupIdentifier:(id)a11;
- (id)initWithIdentifier:(id)a0 type:(id)a1 domain:(id)a2 appBundleId:(id)a3 status:(int)a4 direction:(int)a5 isDonatedBySiri:(id)a6 startDate:(id)a7 durationInSeconds:(id)a8 interactionFields:(id)a9 fields:(id)a10 groupIdentifier:(id)a11 appIntentInteractionIdentifier:(id)a12 interactionSource:(int)a13;
- (id)initWithIdentifier:(id)a0 type:(id)a1 domain:(id)a2 appBundleId:(id)a3 status:(int)a4 direction:(int)a5 isDonatedBySiri:(id)a6 startDate:(id)a7 durationInSeconds:(id)a8 interactionFields:(id)a9 fields:(id)a10 groupIdentifier:(id)a11 appIntentInteractionIdentifier:(id)a12 interactionSource:(int)a13 contentHash:(id)a14;

@end
