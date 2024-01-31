@class NSString, NSURL;

@interface SKEventCaptiveNetworkPresent : SKEvent

@property (readonly, copy, nonatomic) NSString *captiveInterfaceIdentifier;
@property (readonly, copy, nonatomic) NSString *captiveSSID;
@property (readonly, copy, nonatomic) NSURL *captiveURL;

- (id)descriptionWithLevel:(int)a0;
- (void).cxx_destruct;
- (id)initWithCaptiveURL:(id)a0 interfaceIdentifier:(id)a1 ssid:(id)a2;

@end
