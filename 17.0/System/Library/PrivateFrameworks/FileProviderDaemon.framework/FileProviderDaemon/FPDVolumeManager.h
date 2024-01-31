@class NSMutableDictionary, FPDServer, NSMutableArray, FPDVersionsFileCoordinationProviderDelegate;

@interface FPDVolumeManager : NSObject {
    NSMutableArray *_volumes;
    NSMutableDictionary *_versionsProvidersByVolumeID;
    FPDVersionsFileCoordinationProviderDelegate *_delegate;
    NSMutableDictionary *_volumeForProviderDomainID;
}

@property (weak, nonatomic) FPDServer *server;
@property (nonatomic) BOOL excludeDiskImages;

- (id)initWithServer:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)appSupportPathForProviderDomainID:(id)a0;
- (void)cacheLibrary:(id)a0 forProviderDomainID:(id)a1;
- (id)cloudStoragePathForProviderDomainID:(id)a0;
- (void)enumerateLibrariesForPersona:(id)a0 withBlock:(id /* block */)a1;
- (void)enumerateLibrariesWithBlock:(id /* block */)a0;
- (struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)getAllEligibleVolumesWithError:(id *)a0 count:(int *)a1;
- (void)invalidateVolume:(int)a0 reason:(id)a1;
- (id)libraryForProviderDomainID:(id)a0;
- (id)libraryForVolume:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;
- (void)loadAdditionalVolumesWithCompletion:(id /* block */)a0;
- (BOOL)loadEnterpriseVolumeWithError:(id *)a0;
- (BOOL)loadHomeVolume;
- (id)loadSingleVolume:(const struct statfs { unsigned int x0; int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct fsid { int x0[2]; } x7; unsigned int x8; unsigned int x9; unsigned int x10; unsigned int x11; char x12[16]; char x13[1024]; char x14[1024]; unsigned int x15; unsigned int x16[7]; } *)a0 role:(unsigned int)a1;
- (BOOL)loadVolumeWithURL:(id)a0 role:(unsigned int)a1 error:(id *)a2;
- (void)registerVersionsFileCoordinatorForVolume:(id)a0;
- (void)unregisterVersionsFileCoordinatorForVolume:(id)a0;

@end
