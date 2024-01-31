@class NSCache, NSString, NSArray, PKSafariCardNotificationManager, NSObject, NSMutableArray, NSMapTable, PKVirtualCardManager;
@protocol OS_dispatch_queue;

@interface WBSCreditCardDataController : NSObject {
    NSMapTable *_creditCardDataKeychainReferences;
    NSObject<OS_dispatch_queue> *_internalQueue;
    PKVirtualCardManager *_virtualCardManager;
    PKSafariCardNotificationManager *_virtualCardNotificationManager;
    NSMutableArray *_queueOfVirtualCardsToFetchDetailsFor;
    BOOL _isQueueOfVirtualCardsToFetchDetailsForBeingProcessed;
}

@property (readonly, nonatomic) NSArray *creditCardData;
@property (readonly, copy, nonatomic) NSString *titleForUnavailableVirtualCardAlert;
@property (readonly, copy, nonatomic) NSString *messageForUnavailableVirtualCardAlert;
@property (retain, nonatomic) NSCache *artworkCache;

+ (id /* block */)creditCardComparatorForSortingInSettings;
+ (BOOL)hasCreditCardData;

- (id)init;
- (void).cxx_destruct;
- (void)savePendingChangesBeforeTermination;
- (id)_creditCardData;
- (id)fieldsToObscureWhenFillingSingleCreditCardData:(id)a0 formFieldValues:(id)a1;
- (BOOL)authenticationRequiredForVirtualCard:(id)a0;
- (id)fieldsToObscureWhenFillingCreditCard:(id)a0 formMetadata:(id)a1;
- (void)getCreditCardDataToFill:(id)a0 host:(id)a1 externalizedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)getCreditCardDataWithCompletionHandler:(id /* block */)a0;
- (void)markCreditCardDataAsMostRecentlyUsed:(id)a0;
- (void)_removeNeverSaveCreditCardData:(id)a0;
- (void)replaceCreditCardData:(id)a0 withCard:(id)a1;
- (void)_creditCardDataDidChange;
- (id)_deduplicatedVirtualCardDataArray:(id)a0 andCreditCardDataArray:(id)a1;
- (id)_neverSavedCreditCardSuffixFromCard:(id)a0;
- (id)_neverSavedCreditCardSuffixFromCardNumber:(id)a0;
- (BOOL)_shouldOfferVirtualCards;
- (void)_sortCreditCardDataArray:(id)a0;
- (id)_uniqueCardNameForCardName:(id)a0;
- (id)_virtualCardDataFromPKVirtualCards:(id)a0;
- (void)clearCreditCardData;
- (id)defaultNameForCardOfType:(unsigned long long)a0 cardholderName:(id)a1;
- (id)existingCardWithNumber:(id)a0;
- (void)getCardDetailsForVirtualCards:(id)a0 externalizedContext:(id)a1 blockToUpdateCardDetails:(id /* block */)a2;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)getVirtualCardCredentialsWithExternalizedContext:(id)a0 shouldIncludeVPANCards:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)getVirtualCardsWithCompletionHandler:(id /* block */)a0;
- (BOOL)hasUsedNonVirtualCard;
- (BOOL)isCreditCardDataSaved:(id)a0;
- (void)isVirtualCard:(id)a0 lastFilledCardData:(id)a1 completion:(id /* block */)a2;
- (void)neverSaveCreditCardData:(id)a0;
- (void)processQueueOfVirtualCardsToFetchDetailsForWithExternalizedContext:(id)a0 blockToUpdateCardDetails:(id /* block */)a1;
- (void)removeCreditCardData:(id)a0;
- (id)savableCreditCardDataInForm:(id)a0;
- (void)saveCreditCardData:(id)a0 completionHandler:(id /* block */)a1;
- (void)saveCreditCardDataIfAllowed:(id)a0;
- (void)sendCardholderNameEnteredInFormToWalletIfNecessary:(id)a0 lastFilledCardData:(id)a1;
- (void)setHasUsedNonVirtualCard;
- (BOOL)shouldAddCardWithNumber:(id)a0;
- (BOOL)shouldNeverSaveCardWithNumber:(id)a0;
- (void)tellWalletThatExistingCardWasFilledInForm:(id)a0 lastFilledCardData:(id)a1;
- (void)tellWalletThatNewCardWasSaved:(id)a0;
- (id)urlForVirtualCard:(id)a0;
- (id)urlToListOfCardsInWallet;
- (unsigned long long)virtualCardFieldsToRequest;

@end
