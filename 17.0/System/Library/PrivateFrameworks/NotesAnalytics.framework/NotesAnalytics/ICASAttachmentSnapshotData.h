@class NSString, NSArray;

@interface ICASAttachmentSnapshotData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSArray *attachmentSnapshotSummary;
@property (readonly, nonatomic) NSArray *docScanSnapshotSummary;
@property (readonly, nonatomic) NSArray *drawingSnapshotSummary;
@property (readonly, nonatomic) NSArray *tableSnapshotSummary;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithAttachmentSnapshotSummary:(id)a0 docScanSnapshotSummary:(id)a1 drawingSnapshotSummary:(id)a2 tableSnapshotSummary:(id)a3;

@end
