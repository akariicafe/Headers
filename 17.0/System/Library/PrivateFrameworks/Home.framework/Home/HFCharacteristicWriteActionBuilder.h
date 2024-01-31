@class HMCharacteristic, HMCharacteristicWriteAction;
@protocol NSCopying;

@interface HFCharacteristicWriteActionBuilder : HFActionBuilder

@property (readonly, nonatomic) HMCharacteristicWriteAction *action;
@property (retain, nonatomic) HMCharacteristic *characteristic;
@property (retain, nonatomic) id<NSCopying> targetValue;

+ (Class)homeKitRepresentationClass;

- (unsigned long long)hash;
- (id)performValidation;
- (id)description;
- (void).cxx_destruct;
- (BOOL)requiresDeviceUnlock;
- (id)validationError;
- (id)createNewAction;
- (id)commitItem;
- (id)containedAccessoryRepresentables;
- (id)copyForCreatingNewAction;
- (BOOL)hasSameTargetAsAction:(id)a0;
- (id)initWithExistingObject:(id)a0 inHome:(id)a1;
- (BOOL)canUpdateWithActionBuilder:(id)a0;
- (id)compareToObject:(id)a0;
- (BOOL)updateWithActionBuilder:(id)a0;

@end
