@interface HRMedicalRecordFormatter : NSObject {
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ context;
}

- (id)init;
- (void).cxx_destruct;
- (id)attachmentItemsTitleFromRecord:(id)a0;
- (id)attachmentItemsFromRecord:(id)a0;
- (id)displayItemsFromRecord:(id)a0;
- (id)initWithConceptStore:(id)a0 context:(long long)a1;
- (id)structuredItemsFromRecord:(id)a0;

@end
