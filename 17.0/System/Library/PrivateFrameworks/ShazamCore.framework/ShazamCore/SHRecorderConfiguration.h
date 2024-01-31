@class NSDictionary, AMSPromise;

@interface SHRecorderConfiguration : NSObject

@property (readonly, nonatomic) NSDictionary *cacheValues;
@property (readonly, nonatomic) AMSPromise *promise;

- (void).cxx_destruct;
- (id)initWithPromise:(id)a0;
- (id)initWithValues:(id)a0;
- (long long)availableRecordersForClientIdentifier:(id)a0;
- (id)cacheValuesForIdentifier:(id)a0;

@end
