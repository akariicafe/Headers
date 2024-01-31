@class NSUUID, NSString, NSMutableDictionary, NSMutableArray;

@interface FSModuleExtension : _EXExtension

@property (readonly) BOOL isFSSubclass;
@property (readonly) BOOL isSimpleFSSubclass;
@property (readonly) BOOL isNormalFS;
@property (readonly) BOOL isSimpleFS;
@property (readonly) BOOL supportsBlockOps;
@property (readonly) BOOL supportsServerOps;
@property (readonly) BOOL delegateConformantFS;
@property (retain) NSUUID *instanceUUID;
@property (readonly) NSString *bundleID;
@property (retain) NSMutableDictionary *taskSet;
@property (readonly) NSMutableArray *connectors;

- (BOOL)shouldAcceptConnection:(id)a0;
- (void)didFinishLaunching;
- (void).cxx_destruct;
- (void)sendWipeResource:(id)a0 includingBlockRanges:(id)a1 excludingBlockRanges:(id)a2 reply:(id /* block */)a3;

@end
