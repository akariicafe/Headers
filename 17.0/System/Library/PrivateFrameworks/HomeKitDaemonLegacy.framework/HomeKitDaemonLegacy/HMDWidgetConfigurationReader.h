@class NSString;
@protocol HMDWidgetConfigurationReaderInterface;

@interface HMDWidgetConfigurationReader : NSObject <HMFLogging>

@property (readonly) id<HMDWidgetConfigurationReaderInterface> interface;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)init;
- (void).cxx_destruct;
- (id)initWithInterface:(id)a0;
- (void)fetchHomeWidgetsWithCompletion:(id /* block */)a0;
- (id)fetchedHomeWidgets;
- (long long)homeWidgetsEnabledCount;

@end
