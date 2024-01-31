@class NSString, NSMutableArray, HMDLocation;

@interface HMDMicroLocationManager : HMFObject <HMFLogging> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableArray *_lastRecordingScanTimes;
    NSMutableArray *_lastLocalizationScanTimes;
    HMDLocation *_locationManager;
    id /* block */ _dateFactory;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithLocationManager:(id)a0;
- (void).cxx_destruct;
- (id)initWithLocationManager:(id)a0 dateFactory:(id /* block */)a1;
- (void)triggerThrottledMicroLocationLocalizationScanWithMetadata:(id)a0 triggerType:(unsigned long long)a1;
- (void)triggerThrottledMicroLocationRecordingScanWithMetadata:(id)a0 triggerType:(unsigned long long)a1;

@end
