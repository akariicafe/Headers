@interface PBFPosterEditingIngestionManager : NSObject {
    void /* unknown type, empty encoding */ posterStore;
    void /* unknown type, empty encoding */ editingConfirmationViewController;
    void /* unknown type, empty encoding */ ingestedConfiguration;
    void /* unknown type, empty encoding */ galleryViewController;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic, weak) void /* unknown type, empty encoding */ editingViewController;

- (id)init;
- (void).cxx_destruct;
- (void)dismissViewController;
- (id)ingestConfiguration:(id)a0 updatedConfiguredProperties:(id)a1 editingViewController:(id)a2 galleryViewController:(id)a3 showEditingConfirmation:(BOOL)a4;

@end
