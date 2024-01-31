@class NSString, PGGraphNamingProcessor;

@interface PGNamingFaceTimeFaceprintAnalyzer : NSObject <PGNamingAnalyzer> {
    PGGraphNamingProcessor *_processor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)name;
- (id)_keyFaceByPersonLocalIdentifierForPersonNodes:(id)a0 inPhotoLibrary:(id)a1;
- (id)initWithNamingProcessor:(id)a0;
- (void)runAnalysisWithProgressBlock:(id /* block */)a0;

@end
