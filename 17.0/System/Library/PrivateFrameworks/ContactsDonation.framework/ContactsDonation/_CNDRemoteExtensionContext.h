@class CNDonationExtensionRequestHandler, NSString;

@interface _CNDRemoteExtensionContext : _CNDExtensionContext <_CNDRemoteExtensionContextProtocol>

@property (retain, nonatomic) CNDonationExtensionRequestHandler *requestHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
