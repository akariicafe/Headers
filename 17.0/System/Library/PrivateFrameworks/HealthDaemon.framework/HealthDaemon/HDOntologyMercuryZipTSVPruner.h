@class HDOntologyUpdateCoordinator;

@interface HDOntologyMercuryZipTSVPruner : NSObject

@property (readonly, weak, nonatomic) HDOntologyUpdateCoordinator *updateCoordinator;

- (id)init;
- (id)initWithOntologyUpdateCoordinator:(id)a0;
- (void).cxx_destruct;
- (long long)pruneEntries:(id)a0 options:(unsigned long long)a1 error:(id *)a2;

@end
