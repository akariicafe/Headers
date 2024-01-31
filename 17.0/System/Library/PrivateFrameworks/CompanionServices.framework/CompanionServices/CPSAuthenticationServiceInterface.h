@class NSXPCInterface;

@interface CPSAuthenticationServiceInterface : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *clientInterface;
@property (class, readonly, nonatomic) NSXPCInterface *daemonInterface;

@end
