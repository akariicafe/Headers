@class HDOntologyUpdateCoordinator;

@interface HDOntologyManifestUpdater : NSObject

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

+ (id)manifestURLWithBaseURL:(id)a0;
+ (id)manifestVersionURLForManifestURL:(id)a0;

- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void)updateManifestWithURL:(id)a0 session:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
