@interface MADAutoSetPolicy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL userInitiated;
@property (nonatomic) BOOL lockInhibitsEmergencyRemoval;
@property (nonatomic) BOOL allowCheckDownloadOnBattery;
@property (nonatomic) BOOL allowCheckDownloadWhenBatteryLow;
@property (nonatomic) BOOL allowCheckDownloadWhenCPUHigh;
@property (nonatomic) BOOL allowCheckDownloadOverExpensive;
@property (nonatomic) BOOL allowCheckDownloadOverCellular;
@property (nonatomic) BOOL blockCheckDownload;

- (id)init;
- (id)summary;
- (void)encodeWithCoder:(id)a0;
- (id)copy;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initFromAutoAssetSetPolicy:(id)a0;

@end
