@class NSString, NSURL;

@interface VFXSceneLoadOptions : NSObject {
    void /* unknown type, empty encoding */ enableDeferredRendering;
    void /* unknown type, empty encoding */ clientID;
    void /* unknown type, empty encoding */ metalLibraryURL;
    void /* unknown type, empty encoding */ systemRegistrationOptions;
}

@property (nonatomic) void /* unknown type, empty encoding */ isAuthoringScene;
@property (nonatomic) void /* unknown type, empty encoding */ isVFX2;
@property (nonatomic) void /* unknown type, empty encoding */ enableRuntimeScriptCompilation;
@property (nonatomic) void /* unknown type, empty encoding */ allowLoadingFromFuture;
@property (nonatomic) void /* unknown type, empty encoding */ setupAsTemplate;
@property (nonatomic) void /* unknown type, empty encoding */ automaticallyPrepareScene;
@property (nonatomic) void /* unknown type, empty encoding */ setupAsyncRuntime;
@property (nonatomic) void /* unknown type, empty encoding */ asyncRuntimeLock;
@property (nonatomic) void /* unknown type, empty encoding */ loadBindingsMetadata;
@property (nonatomic) void /* unknown type, empty encoding */ enableParallelDecoding;
@property (nonatomic) void /* unknown type, empty encoding */ setupRenderer;
@property (nonatomic) void /* unknown type, empty encoding */ colorPixelFormat;
@property (nonatomic) void /* unknown type, empty encoding */ depthPixelFormat;
@property (nonatomic) BOOL enableDeferredRendering;
@property (nonatomic) void /* unknown type, empty encoding */ internalPixelFormatDepth;
@property (nonatomic) void /* unknown type, empty encoding */ useGammaBlending;
@property (nonatomic) void /* unknown type, empty encoding */ doNotClearRenderOutput;
@property (nonatomic, retain) void /* unknown type, empty encoding */ device;
@property (nonatomic, retain) void /* unknown type, empty encoding */ commandQueue;
@property (nonatomic, copy) NSString *clientID;
@property (nonatomic, copy) NSURL *metalLibraryURL;
@property (nonatomic) void /* unknown type, empty encoding */ peerPid;
@property (nonatomic) void /* unknown type, empty encoding */ peerTaskIdentity;

- (void)registerVFX2AuthoringSystems;
- (id)init;
- (void).cxx_destruct;

@end
