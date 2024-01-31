@class ICASAccountData, ICASNoteAccessData, ICASNoteData, ICASDrawingRecognitionData;

@interface ICNAInlineDrawingRecognitionReport : NSObject

@property (retain, nonatomic) ICASNoteData *noteData;
@property (retain, nonatomic) ICASNoteAccessData *noteAccessData;
@property (retain, nonatomic) ICASAccountData *accountData;
@property (retain, nonatomic) ICASDrawingRecognitionData *drawingRecognitionData;

- (void).cxx_destruct;

@end
