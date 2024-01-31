@class NSString, NSArray, NSDate;

@interface LCFCoreMLBatchProvider : NSObject <MLBatchProvider>

@property (readonly, nonatomic) NSString *featureStoreKey;
@property (readonly, nonatomic) NSDate *timeFirst;
@property (readonly, nonatomic) NSDate *timeLast;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) NSArray *featureProviders;

+ (id)fromMLProvider:(id)a0;

- (void).cxx_destruct;
- (id)featuresAtIndex:(long long)a0;
- (id)init:(id)a0 featureProviders:(id)a1;

@end
