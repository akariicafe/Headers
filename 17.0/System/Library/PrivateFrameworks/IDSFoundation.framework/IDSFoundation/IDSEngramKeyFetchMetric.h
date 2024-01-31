@class NSString, NSDictionary, NSError;

@interface IDSEngramKeyFetchMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) NSString *name;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSError *keyFetchError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithKeyFetchError:(id)a0;

@end
