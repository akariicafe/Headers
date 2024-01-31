@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SUUpdateDiscoveryDateManager : NSObject {
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSMutableArray *_buildVersionArray;
    NSMutableArray *_discoveryDateArray;
}

- (id)init;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)containsBuildVersion:(id)a0;
- (id)discoveryDateforBuildVersion:(id)a0;
- (id)initWithDiscoveryDateDictionary:(id)a0;
- (void)setDiscoveryDate:(id)a0 forBuildVersion:(id)a1;

@end
