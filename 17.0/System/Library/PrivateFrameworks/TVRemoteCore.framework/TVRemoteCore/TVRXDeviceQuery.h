@class NSMutableDictionary, _TVRCRMSDeviceQuery, NSSet, NSString, TVRCRapportDeviceQuery, TVRCMatchPointDeviceQuery;
@protocol TVRXDeviceQueryDelegate;

@interface TVRXDeviceQuery : NSObject <TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSMutableDictionary *aggregateDevices;
@property (retain, nonatomic) TVRCRapportDeviceQuery *rapportDeviceQuery;
@property (retain, nonatomic) _TVRCRMSDeviceQuery *rmsDeviceQuery;
@property (retain, nonatomic) TVRCMatchPointDeviceQuery *matchPointQuery;
@property (weak, nonatomic) id<TVRXDeviceQueryDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)_notifyDelegateDidUpdateDevices;
- (void)rapportDeviceQuery:(id)a0 addedDevice:(id)a1;
- (id)_findAggregateForIdentifier:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_reevaluateAggregates;
- (void)_startSearch;
- (void)_stopSearch;
- (void)matchpointDeviceQuery:(id)a0 addedService:(id)a1;
- (void)matchpointDeviceQuery:(id)a0 removedService:(id)a1;
- (void)rapportDeviceQuery:(id)a0 removedDevice:(id)a1;
- (void)rmsDeviceQuery:(id)a0 addedDevice:(id)a1;
- (void)rmsDeviceQuery:(id)a0 removedDevice:(id)a1;

@end
