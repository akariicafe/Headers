@class NSString;

@interface DDSTrialManagerDataSource : NSObject <DDSTrialManagerDataSource>

@property (readonly) BOOL isEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createTrialClientWithWorkQueue:(id)a0 query:(id)a1;

@end
