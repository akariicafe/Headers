@class NSObject;
@protocol SSUCacheDirectoryProvider, SSUInstalledAppProvider;

@interface SSUSystemState : NSObject

@property (readonly, nonatomic) NSObject<SSUCacheDirectoryProvider> *cacheDirectoryProvider;
@property (readonly, nonatomic) NSObject<SSUInstalledAppProvider> *installedAppProvider;

- (void).cxx_destruct;
- (id)initWithCacheDirectoryProvider:(id)a0 installedAppProvider:(id)a1;
- (id)initWithCacheDirectoryProviderDevice:(id)a0 installedAppProviderDevice:(id)a1;
- (id)initWithCacheDirectoryProviderSandbox:(id)a0 installedAppProviderSandbox:(id)a1;
- (id)initWithCacheDirectoryProviderTemporary:(id)a0 installedAppProviderSandbox:(id)a1;

@end
