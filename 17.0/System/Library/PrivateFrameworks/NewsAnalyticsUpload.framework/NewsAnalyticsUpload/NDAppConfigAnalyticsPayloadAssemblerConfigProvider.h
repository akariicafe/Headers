@protocol FCNewsAppConfigurationManager;

@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider>

@property (retain, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;

- (id)init;
- (void)fetchConfigWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithAppConfigurationManager:(id)a0;

@end
