@class NSXPCConnection;

@interface FSClient : NSObject <FSClientHostXPC>

@property (retain) NSXPCConnection *conn;
@property (copy) id /* block */ taskHandler;
@property (readonly) BOOL connected;

+ (void)initialize;

- (id)init;
- (void).cxx_destruct;
- (void)setupHandlers;
- (void)installedExtensionsSync:(id /* block */)a0;
- (void)validateVolumeName:(id)a0 usingBundle:(id)a1 volumeID:(id)a2 reply:(id /* block */)a3;
- (void)cancelTask:(id)a0 reply:(id /* block */)a1;
- (void)checkResource:(id)a0 options:(id)a1 connection:(id)a2 reply:(id /* block */)a3;
- (void)checkResource:(id)a0 usingBundle:(id)a1 options:(id)a2 connection:(id)a3 reply:(id /* block */)a4;
- (void)currentTasks:(id /* block */)a0;
- (void)currentTasksSync:(id /* block */)a0;
- (void)formatResource:(id)a0 usingBundle:(id)a1 options:(id)a2 connection:(id)a3 reply:(id /* block */)a4;
- (void)getFSProgressForTask:(id)a0 reply:(id /* block */)a1;
- (void)handleInvalidated;
- (void)installedExtensions:(id /* block */)a0;
- (void)probeResource:(id)a0 reply:(id /* block */)a1;
- (void)probeResource:(id)a0 usingBundle:(id)a1 reply:(id /* block */)a2;
- (void)probeResourceSync:(id)a0 reply:(id /* block */)a1;
- (void)probeResourceSync:(id)a0 usingBundle:(id)a1 reply:(id /* block */)a2;
- (void)setTaskUpdateHandler:(id /* block */)a0 reply:(id /* block */)a1;
- (void)taskStatusUpdate:(id)a0;

@end
