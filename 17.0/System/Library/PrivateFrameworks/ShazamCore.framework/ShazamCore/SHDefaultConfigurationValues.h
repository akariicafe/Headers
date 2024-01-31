@class NSDictionary, NSString;

@interface SHDefaultConfigurationValues : NSObject

@property (readonly, nonatomic) NSDictionary *defaultValues;
@property (readonly, nonatomic) double recordingIntermission;
@property (readonly, copy, nonatomic) NSString *campaignGroup;
@property (readonly, nonatomic) long long lookupBatchSize;
@property (readonly, copy, nonatomic) NSString *providerToken;

- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;

@end
