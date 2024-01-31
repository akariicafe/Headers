@class NSString;

@interface WFGasQueryProxy : NSObject <WFWiFiGasProxy>

@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) struct __WiFiDeviceClient { } *device;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)_processGasResults:(id)a0 error:(int)a1;
- (void)gasQueryForRecords:(id)a0 request:(id)a1 handler:(id /* block */)a2;

@end
