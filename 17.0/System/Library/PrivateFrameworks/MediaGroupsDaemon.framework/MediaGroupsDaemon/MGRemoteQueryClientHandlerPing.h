@class NSString;

@interface MGRemoteQueryClientHandlerPing : NSObject <MGRemoteQueryClientHandlerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)handler;

@end
