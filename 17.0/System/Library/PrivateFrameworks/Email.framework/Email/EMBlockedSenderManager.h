@class NSSet, EFLocked, NSString;
@protocol EFScheduler;

@interface EMBlockedSenderManager : NSObject <EMBlockedSenderReader, EMBlockedSenderWriter> {
    struct atomic_flag { _Atomic BOOL _Value; } _didRemoveObservers;
}

@property (retain, nonatomic) EFLocked *blockedSenderCache;
@property (retain, nonatomic) id<EFScheduler> resetScheduler;
@property (retain, nonatomic) id<EFScheduler> notificationScheduler;
@property (nonatomic, getter=isMoveToTrashEnabled) BOOL moveToTrashEnabled;
@property (nonatomic, getter=isBlockedSenderEnabled) BOOL blockedSenderEnabled;
@property (readonly, copy, nonatomic) NSSet *blockedSenderEmailAddresses;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setPromptForBlockedSender:(BOOL)a0;
+ (BOOL)shouldMoveToTrashForMailboxType:(long long)a0;
+ (BOOL)shouldPromptForBlockedSender;

- (void)blockContact:(id)a0;
- (id)init;
- (void)dealloc;
- (void)unblockTokenAddress:(id)a0;
- (void)unblockEmailAddresses:(id)a0;
- (void)_postBlockedSenderListDidChangeNotificationBasedOnBlockedSenderEnabledState;
- (void)_blockedSenderListDidChange:(id)a0;
- (void)_removeObserversIfNeeded;
- (void)_resetBlockedSenderCache;
- (void)_unblockPhoneNumber:(id)a0;
- (BOOL)isEmailAddressBlocked:(id)a0;
- (void)_blockContact:(id)a0 block:(BOOL)a1;
- (BOOL)isContactBlocked:(id)a0;
- (void)_blockPhoneNumber:(id)a0;
- (void)unblockContact:(id)a0;
- (void).cxx_destruct;
- (BOOL)areAnyEmailAddressesBlocked:(id)a0;
- (void)test_tearDown;
- (BOOL)_isEmailAddressBlocked:(id)a0;
- (void)blockEmailAddress:(id)a0;
- (void)unblockEmailAddress:(id)a0;
- (void)blockEmailAddresses:(id)a0;
- (BOOL)isTokenAddressIsBlocked:(id)a0;
- (void)blockTokenAddress:(id)a0;

@end
