@class NSDictionary, NSMutableDictionary, NSString;
@protocol HMDCoreAnalyticsLogEventObserverDelegateDataSource;

@interface HMDCoreAnalyticsLogEventObserverDelegate : NSObject <HMMCoreAnalyticsLogEventObserverDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, weak, nonatomic) id<HMDCoreAnalyticsLogEventObserverDelegateDataSource> dataSource;
@property (readonly, nonatomic) NSDictionary *aggregatedHomeCategorizationDimensions;
@property (readonly, nonatomic) NSDictionary *deviceCapabilitiesAndEnablementsDimensions;
@property (readonly, nonatomic) NSDictionary *aggregatedHomeDimensions;
@property (readonly, nonatomic) NSMutableDictionary *homeDimensions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSource:(id)a0;
- (void).cxx_destruct;
- (void)addAggregatedHomeDimensionsToEventDictionary:(id)a0;
- (void)addCommonDimensionsToEventDictionary:(id)a0;
- (void)addDimensionsForAccessoryIdentifier:(id)a0 toEventDictionary:(id)a1;
- (void)addDimensionsForHome:(id)a0 toEventDictionary:(id)a1;
- (void)configurationChanged;
- (id)dimensionsForHome:(id)a0;

@end
