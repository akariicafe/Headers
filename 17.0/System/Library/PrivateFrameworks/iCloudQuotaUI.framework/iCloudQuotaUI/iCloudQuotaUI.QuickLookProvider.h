@interface iCloudQuotaUI.QuickLookProvider : NSObject <QLPreviewControllerDataSource, QLPreviewControllerPrivateDelegate> {
    void /* unknown type, empty encoding */ file;
    void /* unknown type, empty encoding */ didUpdateItem;
}

- (void)previewControllerDidDismiss:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)previewController:(id)a0 previewItemAtIndex:(long long)a1;
- (long long)previewController:(id)a0 editingModeForPreviewItem:(id)a1;
- (long long)numberOfPreviewItemsInPreviewController:(id)a0;
- (BOOL)previewController:(id)a0 canShareItem:(id)a1;

@end
