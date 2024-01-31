@class NSString, AMSThreadSafeSet, NSArray, ACAccount;
@protocol AMSBagDataSourceProtocol;

@interface AMSBagValue : NSObject

@property (class, readonly, nonatomic) AMSThreadSafeSet *globalBagValueStorage;

@property (copy, nonatomic) ACAccount *account;
@property (weak, nonatomic) id<AMSBagDataSourceProtocol> dataSource;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSArray *transformBlocks;
@property (nonatomic) unsigned long long valueType;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;

+ (id)_valueFromDictionary:(id)a0 forBagKey:(id)a1;
+ (id)frozenBagValueWithKey:(id)a0 value:(id)a1 valueType:(unsigned long long)a2;
+ (id)failingBagValueWithKey:(id)a0 valueType:(unsigned long long)a1 error:(id)a2;
+ (BOOL)_value:(id)a0 isKindOfValueType:(unsigned long long)a1;
+ (id)bagValueWithKey:(id)a0 valueType:(unsigned long long)a1 valuePromise:(id)a2;

- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2;
- (id)_processedDefaultValuePromise:(id)a0;
- (id)initWithDataSource:(id)a0 key:(id)a1 valueType:(unsigned long long)a2 account:(id)a3;
- (void)_handleSuccessWithValue:(id)a0 isDefault:(BOOL)a1 completion:(id /* block */)a2;
- (void)valueWithCompletion:(id /* block */)a0;
- (void)_applyTransformsToValue:(id)a0 index:(long long)a1 completion:(id /* block */)a2;
- (id)_processedDefaultValue:(id)a0;
- (id)transformWithBlock:(id /* block */)a0;
- (id)valuePromise;
- (id)valueWithError:(id *)a0;
- (void).cxx_destruct;

@end
