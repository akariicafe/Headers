@interface WFPopoverModel : NSObject <WFAddToHomeScreenActivityDelegate> {
    void /* unknown type, empty encoding */ database;
    void /* unknown type, empty encoding */ _iconEditorViewModel;
    void /* unknown type, empty encoding */ _sharingPromptModel;
    void /* unknown type, empty encoding */ _fileActivityModel;
}

- (void)homeScreenActivityDidFinish:(id)a0 success:(BOOL)a1;
- (id)init;
- (void).cxx_destruct;
- (void)displayFileActivityWith:(id)a0;

@end
