@class NSString, NSArray, NSNumber;

@interface MCCellularPrivateNetworkPayload : MCPayload

@property (retain, nonatomic) NSString *dataSetName;
@property (retain, nonatomic) NSString *versionNumber;
@property (retain, nonatomic) NSArray *geofenceList;
@property (nonatomic) BOOL cellularDataPreferred;
@property (nonatomic) NSNumber *enableNRStandalone;

+ (id)localizedSingularForm;
+ (id)typeStrings;
+ (id)localizedPluralForm;

- (void).cxx_destruct;
- (id)title;
- (BOOL)_checkForValidContents:(id)a0 outError:(id *)a1;
- (void)_finishInitializationWithContents:(id)a0;
- (id)_validationErrorType:(long long)a0 forInvalidKey:(id)a1;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;

@end
