@interface PaperKit.PaperKitPDFDocument : PDFDocument {
    void /* unknown type, empty encoding */ pageProxies;
    void /* unknown type, empty encoding */ pdfPageIdMap;
    void /* unknown type, empty encoding */ pageIdMap;
}

@property (nonatomic, readonly) Class pageClass;

- (id)initWithURL:(id)a0;
- (id)init;
- (id)initWithData:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(void *)a0;
- (id)pageAtIndex:(long long)a0;
- (void)insertPage:(id)a0 atIndex:(long long)a1;
- (Class)annotationSubclassForType:(id)a0;
- (void)exchangePageAtIndex:(long long)a0 withPageAtIndex:(long long)a1;
- (void)removePageAtIndex:(long long)a0;
- (BOOL)unlockWithPassword:(id)a0;

@end
