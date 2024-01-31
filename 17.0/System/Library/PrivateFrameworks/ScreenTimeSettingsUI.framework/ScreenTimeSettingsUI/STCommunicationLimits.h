@interface STCommunicationLimits : NSObject <NSCopying>

@property long long screenTimeCommunicationLimit;
@property long long downtimeCommunicationLimit;
@property long long contactManagementState;
@property BOOL contactsEditable;

+ (BOOL)hasShownCompatibilityAlertForDSID:(id)a0;
+ (void)setHasShownCompatibilityAlert:(BOOL)a0 forDSID:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToCommunicationLimits:(id)a0;

@end
