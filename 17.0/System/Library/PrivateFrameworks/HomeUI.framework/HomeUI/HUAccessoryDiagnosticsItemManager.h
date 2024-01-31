@class HFAccessoryDiagnosticsControlItem, HFItem, HMAccessory, HFStaticItem, NSMutableArray;

@interface HUAccessoryDiagnosticsItemManager : HFItemManager

@property (retain, nonatomic) NSMutableArray *downloadedLogs;
@property (nonatomic) BOOL collectionInProgress;
@property (nonatomic) BOOL collectionFailed;
@property (readonly, nonatomic) HFAccessoryDiagnosticsControlItem *diagnosticsModesItem;
@property (readonly, nonatomic) HFStaticItem *fetchManufacturerSnapshotButtonItem;
@property (readonly, nonatomic) HFStaticItem *fetchADKSnapshotButtonItem;
@property (readonly, nonatomic) HFStaticItem *logCollectionFailedItem;
@property (readonly, nonatomic) HFItem *enableVerboseLoggingItem;
@property (readonly, nonatomic) HFItem *enableAudioClipLoggingItem;
@property (readonly, nonatomic) HMAccessory *sourceAccessory;

- (void).cxx_destruct;
- (void)setVerboseLoggingEnabled:(BOOL)a0;
- (id)_buildItemProvidersForHome:(id)a0;
- (id)_buildSectionsWithDisplayedItems:(id)a0;
- (void)_loadDownloadedLogs;
- (void)_registerForExternalUpdates;
- (void)_setLoggingOption:(long long)a0 enable:(BOOL)a1;
- (void)_unregisterForExternalUpdates;
- (id)availableLogs;
- (void)beginDiagnosticCollection:(id)a0;
- (void)didChangeNotification:(id)a0;
- (id)initWithDelegate:(id)a0 sourceItem:(id)a1;
- (void)recordDownloadedLog:(id)a0;
- (void)setAudioClipLoggingEnabled:(BOOL)a0;

@end
