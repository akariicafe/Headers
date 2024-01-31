@interface _UIDocumentPickerDocumentCell : _UIDocumentPickerCell

@property (nonatomic) BOOL enabled;

- (void)traitCollectionDidChange:(id)a0;
- (void)prepareForReuse;
- (void)updateContents;
- (void)updateThumbnail;
- (void)_showPickableDiagnostic;
- (void)reloadItem:(BOOL)a0;

@end
