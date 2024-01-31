@class NSString, NSNumber, NSArray;

@interface ICASAccountSnapshotData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *userStartMonth;
@property (readonly, nonatomic) NSNumber *userStartYear;
@property (readonly, nonatomic) NSString *saltVersion;
@property (readonly, nonatomic) NSArray *accountSnapshotSummary;
@property (readonly, nonatomic) NSArray *accountNotesTwoFactorSummary;
@property (readonly, nonatomic) NSArray *collabNotesSummary;
@property (readonly, nonatomic) NSArray *collabFoldersSummary;
@property (readonly, nonatomic) NSArray *noteAttachmentSummary;
@property (readonly, nonatomic) NSArray *scrapPaperAttachmentSummary;
@property (readonly, nonatomic) NSArray *lockedNotesSummary;
@property (readonly, nonatomic) NSArray *smartFoldersSummary;
@property (readonly, nonatomic) NSNumber *totalNoteCount;
@property (readonly, nonatomic) NSNumber *totalFolderCount;
@property (readonly, nonatomic) NSNumber *totalSmartFolderCount;
@property (readonly, nonatomic) NSNumber *totalChecklistCount;
@property (readonly, nonatomic) NSNumber *totalNotesWithChecklistCount;
@property (readonly, nonatomic) NSNumber *totalCountOfPinnedNotes;
@property (readonly, nonatomic) NSNumber *totalCountOfLockedNotes;
@property (readonly, nonatomic) NSArray *deviceSnapshotSummary;
@property (readonly, nonatomic) NSArray *userSnapshotSummary;
@property (readonly, nonatomic) NSArray *attachmentUTISummary;
@property (readonly, nonatomic) NSArray *folderDirectNoteCountHistogram;
@property (readonly, nonatomic) NSArray *collabRootFolderTotalNoteCountHistogram;
@property (readonly, nonatomic) NSArray *docScanPageCountHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderInviteeCountHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderAcceptanceCountHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderNoReplyCountHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedRootFolderAcceptanceRatioHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteInviteeCountHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteAcceptanceCountHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteNoReplyCountHistogram;
@property (readonly, nonatomic) NSArray *collabOwnedSingleNoteAcceptanceRatioHistogram;
@property (readonly, nonatomic) NSArray *noteCharCountHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV1TotalStrokeCountHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV1PencilStrokeCountHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV1FingerStrokeCountHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV1FingerStrokeRatioHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV2TotalStrokeCountHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV2PencilStrokeCountHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV2FingerStrokeCountHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingV2FingerStrokeRatioHistogram;
@property (readonly, nonatomic) NSArray *fullscreenDrawingStrokeCountHistogram;
@property (readonly, nonatomic) NSArray *tableRowCountHistogram;
@property (readonly, nonatomic) NSArray *tableColumnCountHistogram;
@property (readonly, nonatomic) NSArray *tableCellCountHistogram;
@property (readonly, nonatomic) NSArray *passwordProtectedNoteWeeklyAgeHistogram;
@property (readonly, nonatomic) NSArray *topLevelFolderTotalNoteCountHistogram;
@property (readonly, nonatomic) NSArray *attachmentCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *drawingCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingFingerStrokesCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *inlineDrawingPencilStrokesCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *fullScreenDrawingStrokesCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *totalStrokesCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *tagCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *distinctTagCountPerNoteHistogram;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithTags;
@property (readonly, nonatomic) NSNumber *totalCountOfNotesWithMentions;
@property (readonly, nonatomic) NSNumber *totalScrapPaperCount;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithTags;
@property (readonly, nonatomic) NSNumber *totalCountOfScrapPapersWithMentions;
@property (readonly, nonatomic) NSNumber *totalCountOfPinnedScrapPapers;
@property (readonly, nonatomic) NSNumber *totalCountOfLockedScrapPapers;
@property (readonly, nonatomic) NSNumber *totalCountOfCollaboratedScrapPapers;
@property (readonly, nonatomic) NSArray *mentionCountPerNoteHistogram;
@property (readonly, nonatomic) NSArray *distinctMentionCountPerNoteHistogram;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithUserStartMonth:(id)a0 userStartYear:(id)a1 saltVersion:(id)a2 accountSnapshotSummary:(id)a3 accountNotesTwoFactorSummary:(id)a4 collabNotesSummary:(id)a5 collabFoldersSummary:(id)a6 noteAttachmentSummary:(id)a7 scrapPaperAttachmentSummary:(id)a8 lockedNotesSummary:(id)a9 smartFoldersSummary:(id)a10 totalNoteCount:(id)a11 totalFolderCount:(id)a12 totalSmartFolderCount:(id)a13 totalChecklistCount:(id)a14 totalNotesWithChecklistCount:(id)a15 totalCountOfPinnedNotes:(id)a16 totalCountOfLockedNotes:(id)a17 deviceSnapshotSummary:(id)a18 userSnapshotSummary:(id)a19 attachmentUTISummary:(id)a20 folderDirectNoteCountHistogram:(id)a21 collabRootFolderTotalNoteCountHistogram:(id)a22 docScanPageCountHistogram:(id)a23 collabOwnedRootFolderInviteeCountHistogram:(id)a24 collabOwnedRootFolderAcceptanceCountHistogram:(id)a25 collabOwnedRootFolderNoReplyCountHistogram:(id)a26 collabOwnedRootFolderAcceptanceRatioHistogram:(id)a27 collabOwnedSingleNoteInviteeCountHistogram:(id)a28 collabOwnedSingleNoteAcceptanceCountHistogram:(id)a29 collabOwnedSingleNoteNoReplyCountHistogram:(id)a30 collabOwnedSingleNoteAcceptanceRatioHistogram:(id)a31 noteCharCountHistogram:(id)a32 inlineDrawingV1TotalStrokeCountHistogram:(id)a33 inlineDrawingV1PencilStrokeCountHistogram:(id)a34 inlineDrawingV1FingerStrokeCountHistogram:(id)a35 inlineDrawingV1FingerStrokeRatioHistogram:(id)a36 inlineDrawingV2TotalStrokeCountHistogram:(id)a37 inlineDrawingV2PencilStrokeCountHistogram:(id)a38 inlineDrawingV2FingerStrokeCountHistogram:(id)a39 inlineDrawingV2FingerStrokeRatioHistogram:(id)a40 fullscreenDrawingStrokeCountHistogram:(id)a41 tableRowCountHistogram:(id)a42 tableColumnCountHistogram:(id)a43 tableCellCountHistogram:(id)a44 passwordProtectedNoteWeeklyAgeHistogram:(id)a45 topLevelFolderTotalNoteCountHistogram:(id)a46 attachmentCountPerNoteHistogram:(id)a47 drawingCountPerNoteHistogram:(id)a48 inlineDrawingFingerStrokesCountPerNoteHistogram:(id)a49 inlineDrawingPencilStrokesCountPerNoteHistogram:(id)a50 fullScreenDrawingStrokesCountPerNoteHistogram:(id)a51 totalStrokesCountPerNoteHistogram:(id)a52 tagCountPerNoteHistogram:(id)a53 distinctTagCountPerNoteHistogram:(id)a54 totalCountOfNotesWithTags:(id)a55 totalCountOfNotesWithMentions:(id)a56 totalScrapPaperCount:(id)a57 totalCountOfScrapPapersWithTags:(id)a58 totalCountOfScrapPapersWithMentions:(id)a59 totalCountOfPinnedScrapPapers:(id)a60 totalCountOfLockedScrapPapers:(id)a61 totalCountOfCollaboratedScrapPapers:(id)a62 mentionCountPerNoteHistogram:(id)a63 distinctMentionCountPerNoteHistogram:(id)a64;

@end
