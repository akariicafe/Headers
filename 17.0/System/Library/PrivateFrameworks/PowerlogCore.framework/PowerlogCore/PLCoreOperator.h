@class NSMutableDictionary;

@interface PLCoreOperator : NSObject

@property (retain) NSMutableDictionary *operators;

+ (void)registerOperator:(Class)a0;
+ (id)registeredOperators;
+ (id)registeredOperatorsOfSuperClassType:(Class)a0;

- (id)init;
- (void)dealloc;
- (void)log;
- (void)initTaskOperatorDependancies;
- (void)initOperatorDependancies;
- (void).cxx_destruct;
- (void)startOperatorsOfSuperClassType:(Class)a0;
- (id)allOperators;
- (void)initOperatorDependanciesWithBlock:(id /* block */)a0;
- (void)setupEntryObjectsAndStorage:(id)a0;
- (void)startServicesForPreUnlockTelemetry;
- (id)tablesToTrimConditionsForTrimDate:(id)a0;

@end
