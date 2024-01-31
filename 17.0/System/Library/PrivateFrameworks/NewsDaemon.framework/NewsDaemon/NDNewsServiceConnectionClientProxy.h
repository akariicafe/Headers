@class NSString;
@protocol NDNewsServiceClient;

@interface NDNewsServiceConnectionClientProxy : NSObject <NDNewsServiceClient>

@property (weak, nonatomic) id<NDNewsServiceClient> client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)serviceHasNewTodayResults;

@end
