@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    NSData *_bookmarkData;
    TSPObjectContext *_context;
}

@property (readonly, nonatomic, getter=isReadable) BOOL readable;

- (id)initWithURL:(id)a0;
- (void).cxx_destruct;
- (id)bookmarkDataForArchiver:(id)a0;
- (id)initWithBookmarkData:(id)a0 context:(id)a1;
- (void)performReadWithAccessor:(id /* block */)a0;
- (id)storageForDataCopyFromOtherContext;

@end
