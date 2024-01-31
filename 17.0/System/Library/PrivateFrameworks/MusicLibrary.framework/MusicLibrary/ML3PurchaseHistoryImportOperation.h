@interface ML3PurchaseHistoryImportOperation : ML3DAAPImportOperation

- (void)main;
- (unsigned long long)importSource;
- (BOOL)_performPurchaseHistoryImportWithTransaction:(id)a0;
- (struct shared_ptr<ML3DAAPImportItem> { struct ML3DAAPImportItem *x0; struct __shared_weak_count *x1; })importItemFromDAAPElement:(struct shared_ptr<ML3CPP::Element> { struct Element *x0; struct __shared_weak_count *x1; })a0;
- (void)updateImportProgress:(float)a0;

@end
