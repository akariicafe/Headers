@interface _TtCC8PaperKit26PaperDocumentThumbnailView17ThumbnailDelegate : NSObject <PPKPDFThumbnailContextMenuDelegate, PPKPDFThumbnailDataSourceDelegate> {
    void /* unknown type, empty encoding */ thumbnailView;
}

- (id)init;
- (void).cxx_destruct;
- (id)menuElementsForPage:(id)a0;
- (void)didSelectPage;
- (void)handlePageOrderedCollectionDifference:(id)a0;
- (void)insertFileAtURL:(id)a0 atIndex:(long long)a1 completionHandler:(id /* block */)a2;
- (id)pasteActionForPage:(id)a0;
- (void)registerFileRepresentationsForPage:(long long)a0 toItemProvider:(id)a1;

@end
