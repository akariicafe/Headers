@class NSArray, NSString;

@interface PUJoiningDataSourceManager : PUAssetsDataSourceManager <PUAssetsDataSourceManagerDelegate>

@property (nonatomic, setter=_setCurrentUpdateId:) long long _currentUpdateID;
@property (readonly, nonatomic) NSArray *dataSourceManagers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_update;
- (void)_scheduleUpdate;
- (void).cxx_destruct;
- (id)initWithDataSourceManagers:(id)a0;
- (void)_handleScheduledUpdateWithID:(long long)a0;
- (void)assetsDataSourceManager:(id)a0 didChangeAssetsDataSource:(id)a1;
- (id)assetsDataSourceManagerInterestingAssetReferences:(id)a0;

@end
