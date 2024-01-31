@class NSXPCConnection, NSString, FSModuleExtension;

@interface FSModuleConnector : NSObject <FSModuleXPC, FSModuleProjectOps>

@property (retain) FSModuleExtension *ourModule;
@property (retain) NSXPCConnection *ourConnection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)ping:(id /* block */)a0;
- (void).cxx_destruct;
- (void)checkIn:(id)a0 reply:(id /* block */)a1;
- (void)sendTaskUpdate:(id)a0;
- (void)checkResource:(id)a0 options:(id)a1 connection:(id)a2 taskID:(id)a3 reply:(id /* block */)a4;
- (void)formatResource:(id)a0 options:(id)a1 connection:(id)a2 taskID:(id)a3 reply:(id /* block */)a4;
- (void)getLegacyVolumeEndpoint:(id)a0 reply:(id /* block */)a1;
- (void)getProgressPortForTask:(id)a0 reply:(id /* block */)a1;
- (void)getVolumeEndpoint:(id)a0 reply:(id /* block */)a1;
- (void)probeResource:(id)a0 reply:(id /* block */)a1;
- (void)sendWipeResource:(id)a0 includingBlockRanges:(id)a1 excludingBlockRanges:(id)a2 reply:(id /* block */)a3;

@end
