@class PXComposeRecipientDataSource, PXPeopleSuggestionsDataSourceManager, NSString, NSDictionary, NSMutableSet, PXPeopleSuggestionsDataSource, NSMutableArray;
@protocol PXComposeRecipientDataSourceManagerDelegate;

@interface PXComposeRecipientDataSourceManager : NSObject <PXSectionedDataSourceManagerObserver, PXTapToRadar> {
    NSMutableArray *_composeRecipients;
    NSMutableSet *_recipients;
}

@property (retain, nonatomic) PXPeopleSuggestionsDataSource *peopleSuggestionsDataSource;
@property (retain, nonatomic) PXComposeRecipientDataSource *dataSource;
@property (nonatomic) unsigned long long numberOfPeopleSuggested;
@property (retain, nonatomic) PXPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager;
@property (readonly, nonatomic) long long sourceType;
@property (weak, nonatomic) id<PXComposeRecipientDataSourceManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;

- (id)init;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (void).cxx_destruct;
- (void)addRecipients:(id)a0;
- (long long)_lastValidComposeRecipientIndex;
- (void)_addComposeRecipients:(id)a0;
- (id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
- (id)_createComposeRecipientDataSourceFromCurrentState;
- (void)_replaceComposeRecipientAtIndex:(long long)a0 withComposeRecipient:(id)a1;
- (void)deleteComposeRecipientAtIndex:(unsigned long long)a0;
- (id)initWithPeopleSuggestionsDataSourceManager:(id)a0 sourceType:(long long)a1;
- (void)replaceComposeRecipientAtIndex:(unsigned long long)a0 withNewComposeRecipient:(id)a1;

@end
