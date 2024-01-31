@class HMFTimer, NSArray, NSSet, HMDAccessCodeManagerContext, NSString;
@protocol HMDAccessCodeDataManagerDelegate;

@interface HMDAccessCodeDataManager : HMFObject <HMFLogging, HMFTimerDelegate>

@property (readonly, weak) id<HMDAccessCodeDataManagerDelegate> delegate;
@property (readonly) HMDAccessCodeManagerContext *context;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithSimpleLabels;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithUserLabels;
@property (readonly, copy) NSArray *homeAccessCodeValuesWithRemovedUserInfo;
@property (retain) HMFTimer *dataCleanUpTimer;
@property (readonly, copy) NSArray *homeAccessCodeValues;
@property (readonly, copy) NSSet *accessCodeValuesWithUserLabel;
@property (readonly, copy) NSSet *accessCodeValuesWithSimpleLabel;
@property (readonly, copy) NSSet *accessCodeValuesWithRemovedUserInfo;
@property (readonly, copy) NSArray *cachedAccessCodes;
@property (copy) id /* block */ dataCleanUpTimerFactory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_accessCodeInHome:(id)a0 forHomeAccessCodeModel:(id)a1;
+ (id)_accessCodeInHome:(id)a0 forRemovedUserAccessCodeModel:(id)a1;
+ (id)createHomeAccessCodeModelsFromLabelsByAccessCode:(id)a0 forHome:(id)a1;
+ (id)createRemovedUserInfoModelsFromRemovedUserInfoByAccessCode:(id)a0 forHome:(id)a1;
+ (id)createUserAccessCodeModelFromAccessCode:(id)a0 forUserUUID:(id)a1 changedByUserUUID:(id)a2;
+ (id)userWithAccessCode:(id)a0 inHome:(id)a1;

- (void)configure;
- (void)timerDidFire:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0 delegate:(id)a1;
- (id)addOrUpdateHomeAccessCodeModel:(id)a0;
- (id)addOrUpdateUserAccessCodeModel:(id)a0;
- (void)_cleanUpOldRemovedUserData;
- (void)_messageUser:(id)a0 thatTheirAccessCodeWasChangedWithType:(unsigned long long)a1;
- (id)_removeHMDRemovedUserAccessCodeWithAccessCode:(id)a0;
- (id)_removeSimpleLabelAccessCodeValue:(id)a0;
- (id)_removeUserAccessCodeValue:(id)a0 removedByUserUUID:(id)a1;
- (id)_setSimpleLabel:(id)a0 forAccessCodeValue:(id)a1;
- (void)_setUpAndStartTimer;
- (id)_setUserWithUUID:(id)a0 forAccessCodeValue:(id)a1 changedByUserUUID:(id)a2;
- (id)addOrUpdateHMDRemovedUserAccessCodeModel:(id)a0;
- (id)cachedAccessCodeForIdentifier:(id)a0 accessoryUUID:(id)a1;
- (void)handleRemovedHMDRemovedUserAccessCodeModel:(id)a0 message:(id)a1;
- (void)handleRemovedHomeAccessCodeModel:(id)a0 message:(id)a1;
- (void)handleRemovedUserAccessCodeModel:(id)a0 forUser:(id)a1 message:(id)a2;
- (void)handleUpdatedHMDRemovedUserAccessCodeModel:(id)a0 message:(id)a1;
- (void)handleUpdatedHomeAccessCodeModel:(id)a0 message:(id)a1;
- (void)handleUpdatedUserAccessCodeModel:(id)a0 forUser:(id)a1 message:(id)a2;
- (id)homeAccessCodeWithRemovedUserInfoWithUUID:(id)a0;
- (id)removeAllHomeAccessCodes;
- (id)removeHMDRemovedUserAccessCodeModel:(id)a0;
- (void)removeHMDRemovedUserAccessCodeWithAccessCode:(id)a0;
- (id)removeHMDRemovedUserAccessCodeWithCode:(id)a0 removedUserInfo:(id)a1;
- (id)removeHomeAccessCodeModel:(id)a0;
- (id)removeHomeAccessCodeWithValue:(id)a0 removedByUserUUID:(id)a1;
- (id)removeUserAccessCodeModel:(id)a0;
- (id)saveRemovedUserAccessCode:(id)a0 withRemovedUserInfo:(id)a1;
- (id)setUserInformation:(id)a0 forHomeAccessCodeWithValue:(id)a1 changedByUserUUID:(id)a2;
- (id)simpleLabelForAccessCode:(id)a0;
- (void)updateCacheWithAddedAccessCodes:(id)a0;
- (void)updateCacheWithFetchResponses:(id)a0;
- (void)updateCacheWithRemovedAccessCodes:(id)a0;
- (void)updateCacheWithUpdatedAccessCodes:(id)a0;
- (id)updateUserInformation:(id)a0 forHomeAccessCodeWithOldValue:(id)a1 newAccessCodeValue:(id)a2;
- (id)userUUIDForAccessCode:(id)a0;

@end
