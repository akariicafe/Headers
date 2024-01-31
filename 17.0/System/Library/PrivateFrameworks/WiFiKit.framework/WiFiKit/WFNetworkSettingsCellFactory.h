@class UITableView;

@interface WFNetworkSettingsCellFactory : NSObject

@property (retain) UITableView *tableView;

- (id)initWithTableView:(id)a0;
- (void).cxx_destruct;
- (void)_registerCells;
- (id)httpProxyConfigCellAtIndexPath:(id)a0;
- (id)ipv4AddressTextCellAtIndexPath:(id)a0;
- (id)autoJoinCellAtIndexPath:(id)a0;
- (id)autoLoginCellAtIndexPath:(id)a0;
- (id)credentialsViewerCellAtIndexPath:(id)a0 credentails:(id)a1 hideCredentials:(BOOL)a2 isPassword:(BOOL)a3;
- (id)dhcpClientIDCellAtIndexPath:(id)a0;
- (id)dhcpClientIDTextCellAtIndexPath:(id)a0;
- (id)dnsConfigureCellAtIndexPath:(id)a0;
- (id)dnsSearchDomainsCellAtIndexPath:(id)a0;
- (id)dnsServerAddressesCellAtIndexPath:(id)a0;
- (id)forgetCellAtIndexPath:(id)a0;
- (id)httpProxyPasswordTextCellAtIndexPath:(id)a0;
- (id)httpProxyPortTextCellAtIndexPath:(id)a0;
- (id)httpProxyServerTextCellAtIndexPath:(id)a0;
- (id)httpProxyURLTextCellAtIndexPath:(id)a0;
- (id)httpProxyUserTextCellAtIndexPath:(id)a0;
- (id)ipv4AddressCellAtIndexPath:(id)a0;
- (id)ipv4AddressConfigCellAtIndexPath:(id)a0;
- (id)ipv4RouterCellAtIndexPath:(id)a0;
- (id)ipv4RouterTextCellAtIndexPath:(id)a0;
- (id)ipv4SubnetMaskCellAtIndexPath:(id)a0;
- (id)ipv4SubnetMaskTextCellAtIndexPath:(id)a0;
- (id)ipv6AddressCellAtIndexPath:(id)a0;
- (id)ipv6AddressConfigCellAtIndexPath:(id)a0;
- (id)ipv6RouterCellAtIndexPath:(id)a0;
- (id)joinCellAtIndexPath:(id)a0;
- (id)manageCellAtIndexPath:(id)a0;
- (id)networkQualityCellAtIndexPath:(id)a0;
- (id)outrankedCellAtIndexPath:(id)a0 chinaDevice:(BOOL)a1;
- (id)priorityCellAtIndexPath:(id)a0;
- (id)privacyProxyEnabledCellAtIndexPath:(id)a0;
- (id)randomMACCellAtIndexPath:(id)a0 shouldShowSwitch:(BOOL)a1 chinaDevice:(BOOL)a2;
- (id)recommendationCellAtIndexPath:(id)a0;
- (id)renewLeaseCellAtIndexPath:(id)a0;
- (id)saveDataModeCellAtIndexPath:(id)a0;
- (id)segmentedCellAtIndexPath:(id)a0;
- (id)wifiModeCellAtIndexPath:(id)a0;

@end
