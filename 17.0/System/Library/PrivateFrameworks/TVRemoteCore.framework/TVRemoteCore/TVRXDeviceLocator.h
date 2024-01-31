@class NSString, NSMutableDictionary, TVRXDeviceQuery;

@interface TVRXDeviceLocator : NSObject <TVRXDeviceQueryDelegate>

@property (retain, nonatomic) TVRXDeviceQuery *query;
@property (retain, nonatomic) NSMutableDictionary *searches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_timerExpired:(id)a0;
- (void)cancelSearchForDeviceWithIdentifier:(id)a0;
- (void)deviceQueryDidUpdateDevices:(id)a0;
- (void)findDeviceWithIdentifier:(id)a0 timeout:(double)a1 completion:(id /* block */)a2;

@end
