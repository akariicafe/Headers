@class NSString;

@interface PSUIVPNStateSnapshot : NSObject

@property (nonatomic) unsigned long long _vpnSettingsVisibilityStyle;
@property (nonatomic) unsigned long long _vpnConnectivityState;
@property (nonatomic) BOOL _hasRelayConfigurations;
@property (readonly, nonatomic, getter=isLoading) BOOL loading;
@property (readonly, copy, nonatomic) NSString *primaryText;
@property (readonly, copy, nonatomic) NSString *secondaryText;

+ (id)na_identity;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithVisibilityStyle:(unsigned long long)a0 connectivityState:(unsigned long long)a1 hasRelayConfigurations:(BOOL)a2;
- (BOOL)isEqual:(id)a0;

@end
