@class NSXPCInterface;

@interface CPSViewServiceInterface : NSObject

@property (class, readonly, nonatomic) NSXPCInterface *presenterInterface;
@property (class, readonly, nonatomic) NSXPCInterface *presentingInterface;

@end
