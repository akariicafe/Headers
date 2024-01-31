@class NSString, PHFetchResult, CNContact, PXRecipientTransport, PHPerson;

@interface PXPhotoKitPersonSuggestion : NSObject <PXPersonSuggestion> {
    BOOL _fetchQueue_checkedForLinkedContact;
    CNContact *_fetchQueue_linkedContact;
    CNContact *_fetchQueue_prefetchedContact;
    PXRecipientTransport *_fetchQueue_bestTransport;
}

@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) PHPerson *person;
@property (readonly, nonatomic) PHFetchResult *keyFaceFetchResult;
@property (readonly, nonatomic) PHFetchResult *keyAssetFetchResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)personSuggestionWithPerson:(id)a0;
+ (id)personSuggestionWithPerson:(id)a0 keyFaceFetchResult:(id)a1;
+ (id)personSuggestionWithPerson:(id)a0 keyFaceFetchResult:(id)a1 keyAssetFetchResult:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_fetchQueue_fetchLinkedContactForPerson:(id)a0;
- (id)_linkedContactForPerson:(id)a0;
- (void)_prefetchLinkedContactInBackgroundForPerson:(id)a0;
- (void)fetchContactAndBestTransport:(id /* block */)a0;
- (id)initWithPerson:(id)a0 keyFaceFetchResult:(id)a1 keyAssetFetchResult:(id)a2;
- (BOOL)matchesRecipientInRecipients:(id)a0;
- (id)personSuggestionUpdatedKeyAssetFetchResult:(id)a0;
- (id)personSuggestionUpdatedKeyFaceFetchResult:(id)a0;
- (id)personSuggestionUpdatedPerson:(id)a0;
- (void)setPrefetchedContact:(id)a0;

@end
