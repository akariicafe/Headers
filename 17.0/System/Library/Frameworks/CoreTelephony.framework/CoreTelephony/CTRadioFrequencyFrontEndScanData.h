@class NSMutableArray;

@interface CTRadioFrequencyFrontEndScanData : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long hwPrdId;
@property (nonatomic) unsigned long long hwSku;
@property (nonatomic) unsigned long long hwRev;
@property (nonatomic) unsigned long long hwHousing;
@property (nonatomic) BOOL rfcInitPass;
@property (nonatomic) unsigned long long rfcHwid;
@property (nonatomic) unsigned long long rfcRev;
@property (nonatomic) unsigned long long rfcMmwHwid;
@property (nonatomic) unsigned long long rfcMmwRev;
@property (nonatomic) BOOL rffeScanPass;
@property (nonatomic) unsigned long long numExpectedDevices;
@property (nonatomic) unsigned long long numDetectedDevices;
@property (nonatomic) unsigned long long numMissingDevices;
@property (retain, nonatomic) NSMutableArray *rffeScanInfo;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
