@class NSString, UIViewController;
@protocol WFNetworkListRecord, WFNetworkView;

@interface WFLockdownModeContext : NSObject <WFLockdownModeProviderContext, WFContextPresenting>

@property (retain, nonatomic) id<WFNetworkListRecord> network;
@property (nonatomic) unsigned long long securityType;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) long long requestedFields;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) UIViewController<WFNetworkView> *provider;
@property (readonly, nonatomic) BOOL needsDismissal;

@end
