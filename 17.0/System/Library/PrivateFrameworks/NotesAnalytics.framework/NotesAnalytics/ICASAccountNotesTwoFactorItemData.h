@class NSString, NSNumber;

@interface ICASAccountNotesTwoFactorItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndDocScan;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndInlineDrawingV1;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndTables;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndOtherAttachments;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndChecklist;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithCollabAndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndInlineDrawingV1;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndTables;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndOtherAttachments;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndChecklist;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithDocScanAndIsLocked;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV1AndInlineDrawingV2;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV1AndFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV1AndTables;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV1AndOtherAttachments;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV1AndChecklist;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV1AndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV1AndIsLocked;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV2AndFullscreenDrawing;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV2AndTables;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV2AndOtherAttachments;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV2AndChecklist;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV2AndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithInlineDrawingV2AndIsLocked;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithFullscreenDrawingAndTables;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithFullscreenDrawingAndOtherAttachments;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithFullscreenDrawingAndChecklist;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithFullscreenDrawingAndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithFullscreenDrawingAndIsLocked;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithTablesAndOtherAttachments;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithTablesAndChecklist;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithTablesAndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithTablesAndIsLocked;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithOtherAttachmentsAndChecklist;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithOtherAttachmentsAndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithOtherAttachmentsAndIsLocked;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithChecklistAndIsPinned;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesIsPinnedAndIsLocked;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithTotalCountOfNotesWithCollabAndDocScan:(id)a0 totalCountOfNotesWithCollabAndInlineDrawingV1:(id)a1 totalCountOfNotesWithCollabAndInlineDrawingV2:(id)a2 totalCountOfNotesWithCollabAndFullscreenDrawing:(id)a3 totalCountOfNotesWithCollabAndTables:(id)a4 totalCountOfNotesWithCollabAndOtherAttachments:(id)a5 totalCountOfNotesWithCollabAndChecklist:(id)a6 totalCountOfNotesWithCollabAndIsPinned:(id)a7 totalCountOfNotesWithDocScanAndInlineDrawingV1:(id)a8 totalCountOfNotesWithDocScanAndInlineDrawingV2:(id)a9 totalCountOfNotesWithDocScanAndFullscreenDrawing:(id)a10 totalCountOfNotesWithDocScanAndTables:(id)a11 totalCountOfNotesWithDocScanAndOtherAttachments:(id)a12 totalCountOfNotesWithDocScanAndChecklist:(id)a13 totalCountOfNotesWithDocScanAndIsPinned:(id)a14 totalCountOfNotesWithDocScanAndIsLocked:(id)a15 totalCountOfNotesWithInlineDrawingV1AndInlineDrawingV2:(id)a16 totalCountOfNotesWithInlineDrawingV1AndFullscreenDrawing:(id)a17 totalCountOfNotesWithInlineDrawingV1AndTables:(id)a18 totalCountOfNotesWithInlineDrawingV1AndOtherAttachments:(id)a19 totalCountOfNotesWithInlineDrawingV1AndChecklist:(id)a20 totalCountOfNotesWithInlineDrawingV1AndIsPinned:(id)a21 totalCountOfNotesWithInlineDrawingV1AndIsLocked:(id)a22 totalCountOfNotesWithInlineDrawingV2AndFullscreenDrawing:(id)a23 totalCountOfNotesWithInlineDrawingV2AndTables:(id)a24 totalCountOfNotesWithInlineDrawingV2AndOtherAttachments:(id)a25 totalCountOfNotesWithInlineDrawingV2AndChecklist:(id)a26 totalCountOfNotesWithInlineDrawingV2AndIsPinned:(id)a27 totalCountOfNotesWithInlineDrawingV2AndIsLocked:(id)a28 totalCountOfNotesWithFullscreenDrawingAndTables:(id)a29 totalCountOfNotesWithFullscreenDrawingAndOtherAttachments:(id)a30 totalCountOfNotesWithFullscreenDrawingAndChecklist:(id)a31 totalCountOfNotesWithFullscreenDrawingAndIsPinned:(id)a32 totalCountOfNotesWithFullscreenDrawingAndIsLocked:(id)a33 totalCountOfNotesWithTablesAndOtherAttachments:(id)a34 totalCountOfNotesWithTablesAndChecklist:(id)a35 totalCountOfNotesWithTablesAndIsPinned:(id)a36 totalCountOfNotesWithTablesAndIsLocked:(id)a37 totalCountOfNotesWithOtherAttachmentsAndChecklist:(id)a38 totalCountOfNotesWithOtherAttachmentsAndIsPinned:(id)a39 totalCountOfNotesWithOtherAttachmentsAndIsLocked:(id)a40 totalCountOfNotesWithChecklistAndIsPinned:(id)a41 totalCountOfNotesIsPinnedAndIsLocked:(id)a42;

@end
