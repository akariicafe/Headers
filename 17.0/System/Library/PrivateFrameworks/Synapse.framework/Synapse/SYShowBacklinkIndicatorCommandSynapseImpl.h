@class SYBacklinkIndicatorClient, NSString;

@interface SYShowBacklinkIndicatorCommandSynapseImpl : NSObject <SYShowBacklinkIndicatorCommandImpl>

@property (retain, nonatomic) SYBacklinkIndicatorClient *_client;
@property (nonatomic) BOOL didSucceed;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
