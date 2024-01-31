@class NSString;
@protocol MSViewServiceHostProtocol;

@interface _MSRemoteViewController : _UIRemoteViewController <MSViewServiceHostProtocol>

@property (weak, nonatomic) id<MSViewServiceHostProtocol> host;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (void)requestDismiss;

@end
