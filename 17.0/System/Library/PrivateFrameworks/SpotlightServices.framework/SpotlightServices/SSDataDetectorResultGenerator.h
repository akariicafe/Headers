@interface SSDataDetectorResultGenerator : NSObject {
    BOOL _canceled;
    long long _ddJobIdentifier;
}

- (void)cancel;
- (void)buildResultSectionsForPhoneNumberFromResult:(id)a0 completion:(id /* block */)a1 queryId:(unsigned long long)a2;
- (id)buildCardSectionForPhoneNumber:(id)a0;
- (id)buildCardSectionForEmail:(id)a0;
- (id)buildPersonBasedSubtitleButtonItemWithTitle:(id)a0 person:(id)a1;
- (id)buildResultSectionForTrackingNumber:(id)a0 carrier:(id)a1 url:(id)a2 queryId:(unsigned long long)a3;
- (id)buildResultSectionWithCardSections:(id)a0 queryId:(unsigned long long)a1 resultBundleId:(id)a2 sectionTitle:(id)a3 completion:(id)a4;
- (void)buildResultSectionsForDateTimeFromResult:(id)a0 querString:(id)a1 completion:(id /* block */)a2 queryId:(unsigned long long)a3 searchString:(id)a4;
- (void)buildResultSectionsForEmailFromResult:(id)a0 completion:(id /* block */)a1 queryId:(unsigned long long)a2;
- (void)buildResultSectionsForTrackingNumberFromResult:(id)a0 completion:(id /* block */)a1 queryId:(unsigned long long)a2;
- (id)buttonItemWithTitle:(id)a0 symbol:(id)a1 command:(id)a2;
- (void)getResultSections:(id)a0 queryId:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)personWithPhoneNumber:(id)a0 email:(id)a1;

@end
