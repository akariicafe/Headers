@class NSUUID, NSString, CTUserLabel, CTCellularPlan, NSNumber, CTPlan;

@interface CTCellularPlanItem : NSObject <NSCopying, NSSecureCoding> {
    NSString *_name;
    NSString *_iccid;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSNumber *isSelectedOverride;
@property (nonatomic) long long type;
@property (nonatomic) long long lockState;
@property (nonatomic) BOOL shouldDisplayType;
@property (nonatomic) BOOL shouldAutoSelectWhenInRange;
@property (nonatomic) BOOL isSimStateValid;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL shouldAppearDisabled;
@property (nonatomic) BOOL shouldDisplay;
@property (nonatomic) BOOL isActiveDataPlan;
@property (nonatomic) BOOL isDefaultVoice;
@property (nonatomic) BOOL shouldDisplayExtendedConsentInfo;
@property (nonatomic) BOOL isLocalTransferToeSIMSupported;
@property (nonatomic) BOOL isTransferred;
@property (nonatomic) int status;
@property (nonatomic) unsigned long long supportedTransferOption;
@property (nonatomic) long long settingsMode;
@property (copy, nonatomic) NSUUID *companionSlotUuid;
@property (copy, nonatomic) NSString *companionSimLabelId;
@property (retain, nonatomic) NSString *phoneNumber;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) CTUserLabel *userLabel;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) CTCellularPlan *plan;
@property (readonly, nonatomic) CTPlan *ctPlan;
@property (readonly, nonatomic) BOOL isBackedByCellularPlan;
@property (readonly, nonatomic) BOOL isSelected;
@property (readonly, nonatomic) BOOL isInstalling;
@property (readonly, nonatomic) long long transferredStatus;
@property (readonly, nonatomic) BOOL isCheckingCellularConnectivity;
@property (readonly, nonatomic) NSString *transferredToDeviceDisplayName;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *iccid;
@property (readonly, nonatomic) NSString *carrierName;

- (id)redactedDescription;
- (id)typeAsString:(long long)a0;
- (void)encodeWithCoder:(id)a0;
- (long long)compare:(id)a0;
- (id)description;
- (id)customDescription;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCellularPlan:(id)a0 uuid:(id)a1 iccid:(id)a2 name:(id)a3 type:(long long)a4 phoneNumber:(id)a5 label:(id)a6 isLocalTransferToeSIMSupported:(BOOL)a7 isTransferred:(BOOL)a8 transferredStatus:(long long)a9 transferredToDeviceDisplayName:(id)a10 supportedTransferOption:(unsigned long long)a11 settingsMode:(long long)a12;
- (id)initWithCellularPlan:(id)a0 uuid:(id)a1 type:(long long)a2 phoneNumber:(id)a3 label:(id)a4 transferredStatus:(long long)a5 transferredToDeviceDisplayName:(id)a6 supportedTransferOption:(unsigned long long)a7 settingsMode:(long long)a8;
- (id)initWithIccid:(id)a0 uuid:(id)a1 name:(id)a2 phoneNumber:(id)a3 label:(id)a4 isLocalTransferToeSIMSupported:(BOOL)a5 isTransferred:(BOOL)a6 transferredStatus:(long long)a7 transferredToDeviceDisplayName:(id)a8 supportedTransferOption:(unsigned long long)a9 settingsMode:(long long)a10;
- (id)settingsModeAsString:(long long)a0;
- (id)transferredStatusAsString:(long long)a0;

@end
