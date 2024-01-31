@interface NotesEditor.ICInlineDrawingUpgradeHelper : NSObject {
    void /* unknown type, empty encoding */ drawingAttachmentIdentifierToPaperAttachment;
    void /* unknown type, empty encoding */ drawingUpgraders;
    void /* unknown type, empty encoding */ upgradeSemaphore;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ note;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ managedObjectContext;
@property (nonatomic, weak) void /* unknown type, empty encoding */ textView;

- (id)init;
- (void).cxx_destruct;
- (void)cancelUpgrade;
- (id)initWithNote:(id)a0 managedObjectContext:(id)a1 textView:(id)a2;
- (void)upgradeAllAttachmentsInNote;
- (id)upgradeWithAttachment:(id)a0 itemProviders:(id)a1 itemsAnchor:(long long)a2;
- (id)upgradeWithAttachment:(id)a0 itemProviders:(id)a1 itemsLocation:(struct CGPoint { double x0; double x1; })a2;

@end
