@class NSString, NSXPCInterface;

@interface FSKitConstants : NSObject

@property (class, readonly, retain) NSXPCInterface *FSModuleExtensionXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSModuleExtensionHostXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSClientXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSClientHostXPCProtocol;
@property (class, readonly, retain) NSXPCInterface *FSTaskMessageOps;
@property (class, readonly, retain) NSXPCInterface *FSTaskOps;
@property (class, readonly, retain) NSXPCInterface *FSKitHelperProtocol;
@property (class, readonly, retain) NSXPCInterface *FSTaskProgressXPCProtocol;
@property (class, readonly, retain) NSString *moduleExtensionPointName;

@end
