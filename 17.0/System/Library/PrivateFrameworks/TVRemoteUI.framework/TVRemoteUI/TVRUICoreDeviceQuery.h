@class TVRCDeviceQuery, NSMutableDictionary, NSString;
@protocol TVRUIDeviceSearchDelegate;

@interface TVRUICoreDeviceQuery : NSObject <TVRCDeviceQueryDelegate, TVRUIDeviceQuery>

@property (weak, nonatomic) id<TVRUIDeviceSearchDelegate> delegate;
@property (retain, nonatomic) TVRCDeviceQuery *query;
@property (retain, nonatomic) NSMutableDictionary *deviceList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasStarted;
- (void)stop;
- (void)startQuery:(id)a0;
- (void).cxx_destruct;
- (void)deviceQueryDidUpdateDevices:(id)a0;
- (void)didUpdateSuggestedDevices:(id)a0;

@end
