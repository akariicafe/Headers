@class NSString, NSURL, TDLogger, TDDistiller;

@interface TDDistillRunner : NSObject {
    BOOL _packDocument;
    TDDistiller *_distiller;
    NSURL *_carScratchURL;
}

@property (copy, nonatomic) NSURL *outputURL;
@property (retain, nonatomic) TDLogger *logger;
@property (copy) NSString *assetStoreVersionString;
@property long long assetStoreVersionNumber;
@property (nonatomic) BOOL packImagesInDocument;
@property (nonatomic) NSString *minDeploymentTarget;

- (id)init;
- (void)dealloc;
- (BOOL)_isDistillUnnecessaryForDocument:(id)a0;
- (void)_moveScratchToOutputPath;
- (void)_removeScratchPath;
- (id)carScratchURL;
- (BOOL)runDistillWithDocumentURL:(id)a0 outputURL:(id)a1 attemptIncremental:(BOOL)a2 forceDistill:(BOOL)a3;

@end
