@class NSString, NSError, NSObject, MPCVocalAttenuationModel;
@protocol OS_dispatch_queue;

@interface MPCVocalAttenuationModelProviderImplementation : NSObject {
    NSObject<OS_dispatch_queue> *_creationQueue;
}

@property (retain, nonatomic) MPCVocalAttenuationModel *model;
@property (copy, nonatomic) NSError *loadingError;
@property (readonly, nonatomic) long long state;
@property (readonly, copy, nonatomic) NSString *plistPath;
@property (readonly, copy, nonatomic) NSString *basePath;
@property (readonly, copy, nonatomic) NSString *modelName;

- (id)init;
- (id)baseDirectoryURL;
- (void).cxx_destruct;
- (void)prepareWithCompletion:(id /* block */)a0;
- (id)_setupPaths;
- (id)baseModelDirectoryURL;
- (id)bundleModelDirectoryURL;
- (id)directoriesAtURL:(id)a0;
- (BOOL)isValidEspressoFile:(id)a0;
- (BOOL)isValidModelFile:(id)a0;
- (BOOL)isValidPlistModelFile:(id)a0;
- (id)latestModelDirectoryAtURL:(id)a0;
- (id)modelFileExtensions;
- (BOOL)moveModelFromURL:(id)a0 toURL:(id)a1;
- (void)purgeModelAtURL:(id)a0;
- (void)purgeSideLoadedModelDirectoriesAtURL:(id)a0;
- (id)remoteModelDirectoryURL;
- (BOOL)validateModelAtURL:(id)a0;

@end
