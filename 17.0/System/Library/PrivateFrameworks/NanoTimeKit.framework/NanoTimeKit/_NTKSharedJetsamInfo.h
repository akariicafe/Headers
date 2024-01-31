@class NSLock, NSMapTable;

@interface _NTKSharedJetsamInfo : NSObject {
    NSMapTable *_fetchers;
    NSLock *_fetchersLock;
    int _pid;
}

+ (id)sharedJetsamInfo;

- (id)init;
- (void)unregister:(id)a0;
- (BOOL)resetIntervalFor:(id)a0;
- (void).cxx_destruct;
- (BOOL)getInfoFor:(id)a0 into:(struct jetsam_info { long long x0; long long x1; long long x2; } *)a1;

@end
