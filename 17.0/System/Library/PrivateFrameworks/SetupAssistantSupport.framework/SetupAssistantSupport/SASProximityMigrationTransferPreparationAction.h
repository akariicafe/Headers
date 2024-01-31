@class NSString;

@interface SASProximityMigrationTransferPreparationAction : SASProximityAction

@property (retain, nonatomic) NSString *deviceName;

+ (unsigned long long)actionID;
+ (id)actionFromDictionary:(id)a0;

- (BOOL)hasResponse;
- (void).cxx_destruct;
- (id)requestPayload;

@end
