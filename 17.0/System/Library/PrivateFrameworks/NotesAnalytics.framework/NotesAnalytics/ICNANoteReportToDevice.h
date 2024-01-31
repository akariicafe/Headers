@interface ICNANoteReportToDevice : NSObject

@property (nonatomic) unsigned long long countOfPinnedNotes;
@property (nonatomic) unsigned long long countOfModernNotes;
@property (nonatomic) unsigned long long countOfModernNotesWithDeeplink;
@property (nonatomic) unsigned long long countOfModernNotesWithDrawing;
@property (nonatomic) unsigned long long countOfModernNotesWithImage;
@property (nonatomic) unsigned long long countOfModernNotesWithLinks;
@property (nonatomic) unsigned long long countOfModernNotesWithTable;
@property (nonatomic) unsigned long long countOfModernNotesWithWebHighlights;
@property (nonatomic) unsigned long long countOfScrapPapers;
@property (nonatomic) unsigned long long countOfScrapPapersWithDeepLink;
@property (nonatomic) unsigned long long countOfScrapPapersWithDrawing;
@property (nonatomic) unsigned long long countOfScrapPapersWithImage;
@property (nonatomic) unsigned long long countOfScrapPapersWithLinks;
@property (nonatomic) unsigned long long countOfScrapPapersWithTables;
@property (nonatomic) unsigned long long countOfScrapPapersWithWebHighlights;

@end
