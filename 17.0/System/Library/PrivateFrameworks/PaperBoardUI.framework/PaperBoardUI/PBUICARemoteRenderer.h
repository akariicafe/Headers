@class NSSet, NSString;
@protocol PBUIRenderer, PBUIRemoteRendererConnection;

@interface PBUICARemoteRenderer : NSObject <PBUIRenderer>

@property (class, readonly, nonatomic) NSSet *secureCodableRequestClasses;
@property (class, readonly, nonatomic) id<PBUIRenderer> remoteRendererIfPossible;

@property (readonly, nonatomic) id<PBUIRemoteRendererConnection> underlyingConnection;
@property (readonly, nonatomic) struct CGColorSpace { } *colorSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldUseXPCServiceForRendering;

- (id)init;
- (id)initWithUnderlyingConnection:(id)a0;
- (void).cxx_destruct;
- (void)renderRequest:(id)a0 completionHandler:(id /* block */)a1;
- (id)renderRequest:(id)a0 error:(out id *)a1;
- (BOOL)supportsRequest:(id)a0 orError:(out id *)a1;

@end
