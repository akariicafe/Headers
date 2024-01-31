@class NSProgress, FSTaskDescription, NSXPCConnection;

@interface FSTaskProgress : NSObject

@property (retain) NSXPCConnection *ourConn;
@property (readonly, retain) NSProgress *progress;
@property (readonly, copy) FSTaskDescription *initialDescription;

+ (void)constructFromListener:(id)a0 description:(id)a1 reply:(id /* block */)a2;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithProgress:(id)a0 description:(id)a1;

@end
