@class NSString, NSSet, NSMutableSet, HMAccessCodeUserInformation;

@interface HFPinCode : NSObject <NSCopying> {
    NSMutableSet *_accessoryAccessCodes;
    NSMutableSet *_accessories;
}

@property (retain, nonatomic) NSString *unknownMatterGuestUniqueID;
@property (readonly, nonatomic) NSSet *accessoryAccessCodes;
@property (readonly, nonatomic) BOOL hasRestrictions;
@property (retain, nonatomic) HMAccessCodeUserInformation *userLabel;
@property (readonly, copy, nonatomic) NSString *pinCodeValue;
@property (readonly, nonatomic) NSSet *accessories;

+ (id)na_identity;

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAccessoryAccessCode:(id)a0;
- (void)addAccessories:(id)a0;
- (void)addAccessoryAccessCode:(id)a0;
- (id)copyWithNewPinCodeValue:(id)a0;
- (id)initWithHomeAccessCode:(id)a0;
- (id)initWithLabel:(id)a0 accessCodeValue:(id)a1 accessoryAccessCodes:(id)a2;
- (void)removeAccessories:(id)a0;
- (void)removeAccessoryAccessCode:(id)a0;

@end
