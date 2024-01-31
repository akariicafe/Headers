@class NSString;

@interface PHForwardingSettings : NSObject

@property unsigned int callForwardingState;
@property (retain, nonatomic) NSString *callForwardingNumber;
@property (retain, nonatomic) NSString *defaultCallForwardingNumber;
@property (retain, nonatomic) NSString *defaultCallForwardingNumberPreferencesKey;

- (void).cxx_destruct;

@end
