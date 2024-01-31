@class NSString, NSNumber;

@interface ICASDrawingRecognitionData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countOfPencilStrokes;
@property (readonly, nonatomic) NSNumber *countOfFingerStrokes;
@property (readonly, nonatomic) NSNumber *countOfRecognizedHandwrittenCharacters;
@property (readonly, nonatomic) NSNumber *countOfRecognizedLines;
@property (readonly, nonatomic) NSString *handwritingLanguage;
@property (readonly, nonatomic) NSString *drawingID;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountOfPencilStrokes:(id)a0 countOfFingerStrokes:(id)a1 countOfRecognizedHandwrittenCharacters:(id)a2 countOfRecognizedLines:(id)a3 handwritingLanguage:(id)a4 drawingID:(id)a5;

@end
