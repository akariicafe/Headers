@class NSDictionary;

@interface MAAutoAssetSetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL lockInhibitsEmergencyRemoval;
@property (nonatomic) BOOL allowCheckDownloadOnBattery;
@property (nonatomic) BOOL allowCheckDownloadWhenBatteryLow;
@property (nonatomic) BOOL allowCheckDownloadWhenCPUHigh;
@property (nonatomic) BOOL allowCheckDownloadOverExpensive;
@property (nonatomic) BOOL allowCheckDownloadOverCellular;
@property (nonatomic) BOOL blockCheckDownload;
@property (nonatomic) BOOL blockCheckDownloadWhenRecentUserActivity;
@property (nonatomic) BOOL preferCheckDownloadOverWiFi;
@property (nonatomic) BOOL restrictCheckDownloadToNetwork;
@property (retain, nonatomic) NSDictionary *additionalPolicyControl;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
