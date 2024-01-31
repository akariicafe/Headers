@class ICQCommerceRemoteUIDelegate;

@interface ICQCommerceRemoteUIDataProvider : ISPropertyListProvider

@property (nonatomic, getter=isPlist) BOOL plist;
@property (weak, nonatomic) ICQCommerceRemoteUIDelegate *parent;

- (void)_setFailureType:(id)a0;
- (BOOL)parseData:(id)a0 returningError:(id *)a1;
- (void).cxx_destruct;

@end
