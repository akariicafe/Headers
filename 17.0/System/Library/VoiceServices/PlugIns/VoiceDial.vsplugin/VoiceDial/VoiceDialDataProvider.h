@class NSString, NSArray, NSSet, VoiceDialNameDataSource, NSObject;
@protocol OS_dispatch_queue;

@interface VoiceDialDataProvider : NSObject <VSRecognitionModelDataProvider> {
    void *_addressBook;
    struct __CFArray { } *_people;
    NSArray *_phoneLabels;
    NSArray *_facetimeLabels;
    NSSet *_weightedPhoneLabels;
    NSSet *_weightedFacetimeLabels;
    struct { long long location; long long length; } _peopleRange;
    long long _totalPeople;
    VoiceDialNameDataSource *_namesSource;
    int _lastSequenceNumber;
    struct __CFString { } *_lastDatabaseUUID;
    struct { unsigned char hasDeterminedCompositePref : 1; unsigned char compositeNamesOnly : 1; unsigned char canVideoCall : 1; } _voiceDialProviderFlags;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void *)_addressBook;
- (BOOL)isCacheValidityIdentifierValid:(id)a0;
- (void)beginReportingChanges;
- (id)cacheValidityIdentifier;
- (BOOL)getValue:(id *)a0 weight:(long long *)a1 atIndex:(long long)a2 forClassWithIdentifier:(id)a3 inModelWithIdentifier:(id)a4;
- (id)phoneticValueAtIndex:(long long)a0 forClassWithIdentifier:(id)a1 inModelWithIdentifier:(id)a2;
- (void)stopReportingChanges;
- (long long)valueCountForClassWithIdentifier:(id)a0 inModelWithIdentifier:(id)a1;
- (id)_facetimeLabels;
- (void)_handleAddressBookChanged;
- (id)_namesSource;
- (id)_phoneLabels;
- (BOOL)_sequenceNumberIsValid:(int)a0;
- (BOOL)_shouldUseCompositeNamesOnly;
- (long long)_totalPeople;
- (void *)_voiceDialRecordAtIndex:(long long)a0;
- (void)getLabels:(id *)a0 andWeightedLabels:(id *)a1 ForABProperty:(int)a2;

@end
