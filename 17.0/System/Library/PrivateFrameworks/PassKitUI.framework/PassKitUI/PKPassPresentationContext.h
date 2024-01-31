@class NSArray, NSData, PKBackgroundContactlessInterfaceSessionController;
@protocol NSCopying;

@interface PKPassPresentationContext : NSObject

@property (nonatomic, getter=isFieldDetect) BOOL fieldDetect;
@property (nonatomic, getter=isPostPayment) BOOL postPayment;
@property (nonatomic) long long standaloneTransactionType;
@property (nonatomic, getter=wantsForcedPayment) BOOL forcePayment;
@property (nonatomic, getter=wantsPersistentCardEmulation) BOOL persistentCardEmulation;
@property (copy, nonatomic) NSArray *additionalPassUniqueIdentifiers;
@property (nonatomic) BOOL wasAutomaticallySelected;
@property (nonatomic, getter=wasForcedFromButton) BOOL forcedFromButton;
@property (copy, nonatomic) id<NSCopying> userInfo;
@property (nonatomic) BOOL limitServerLoad;
@property (nonatomic) unsigned long long presentationSource;
@property (nonatomic) BOOL presentFanned;
@property (retain, nonatomic) NSData *externalizedAuthenticationContext;
@property (weak, nonatomic) PKBackgroundContactlessInterfaceSessionController *backgroundSession;

+ (id)contextWithAdditionalPassUniqueIdentifiers:(id)a0;
+ (id)contextWithWasAutomaticallySelected:(BOOL)a0 additionalPassUniqueIdentifiers:(id)a1;
+ (id)contextWithWasAutomaticallySelected:(BOOL)a0 additionalPassUniqueIdentifiers:(id)a1 userInfo:(id)a2;

- (id)description;
- (void).cxx_destruct;

@end
