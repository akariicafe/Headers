@class NSUUID, NSString, UARPAccessoryID, NSMutableSet, NSMutableArray, NSArray;

@interface UARPAccessory : NSObject {
    UARPAccessoryID *_id;
    NSMutableArray *_internalPendingAssets;
    BOOL _reachable;
    BOOL _assetTransfersPaused;
    NSMutableSet *_pendingClientPropertyQueries;
    NSArray *_partnerSerialNumbers;
}

@property NSUUID *uuid;
@property (readonly) NSString *serialNumber;
@property (readonly) NSString *modelName;
@property (readonly) NSString *modelNumber;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *productNumber;
@property (readonly) NSString *productGroup;
@property (readonly) NSString *hwFusingType;
@property (readonly) NSString *hwRevision;
@property (readonly) NSString *friendlyName;
@property (copy) NSString *stagedFirmwareVersion;
@property (copy) NSString *availableFirmwareVersion;
@property BOOL userInitiatedFirmwareStaging;
@property BOOL userInitiatedFirmwareApply;
@property unsigned int firmwareUpdateBytesTransferred;
@property unsigned int firmwareUpdateBytesTotal;
@property (copy) NSString *filepathCurrentAsset;
@property BOOL enableFirmwareDownloadOnDemand;
@property BOOL downloadOnCellularAllowed;
@property BOOL autoDownloadAllowed;
@property (readonly) BOOL suppressAutomaticDynamicAssets;
@property long long transport;
@property (readonly) unsigned long long uarpVersion;
@property unsigned long long capability;

+ (id)logger;

- (void)setModelName:(id)a0;
- (void)setReachable:(BOOL)a0;
- (void)setFriendlyName:(id)a0;
- (void)setSerialNumber:(id)a0;
- (void)setModelNumber:(id)a0;
- (id)bsdNotifications;
- (id)initWithID:(id)a0;
- (id)description;
- (id)serviceBsdNotifications;
- (void)setFirmwareVersion:(id)a0;
- (void)setManufacturer:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)getID;
- (BOOL)reachable;
- (void)setProductNumber:(id)a0;
- (id)initWithHardwareID:(id)a0 uuid:(id)a1;
- (id)initWithProductGroup:(id)a0 productNumber:(id)a1 uuid:(id)a2;
- (void)setUarpVersion:(unsigned long long)a0;
- (void)addPendingAsset:(id)a0;
- (void)addPendingClientPropertyQuery:(unsigned long long)a0;
- (BOOL)assetTransfersPaused;
- (BOOL)clientQueryPendingForProperty:(unsigned long long)a0;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3;
- (id)initWithManufacturer:(id)a0 modelName:(id)a1 serialNumber:(id)a2 firmwareVersion:(id)a3 productGroup:(id)a4 productNumber:(id)a5;
- (id)initWithModelNumber:(id)a0;
- (id)partnerSerialNumbers;
- (id)pendingAssets;
- (void)removePendingAsset:(id)a0;
- (void)removePendingClientPropertyQuery:(unsigned long long)a0;
- (void)setAssetTransfersPaused:(BOOL)a0;
- (void)setHwFusingType:(id)a0;
- (void)setHwRevision:(id)a0;
- (void)setPartnerSerialNumbers:(id)a0;
- (void)setProductGroup:(id)a0;
- (void)setSuppressAutomaticDynamicAssets:(BOOL)a0;

@end
