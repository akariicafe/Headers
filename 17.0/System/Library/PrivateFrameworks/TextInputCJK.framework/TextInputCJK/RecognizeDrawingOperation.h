@class CHRecognizer, NSArray, TIInputManagerHandwriting, NSString, TIHandwritingStrokes, NSLocale;

@interface RecognizeDrawingOperation : NSOperation {
    TIHandwritingStrokes *_strokes;
    NSLocale *_recognitionLanguage;
}

@property (retain, nonatomic) NSArray *candidates;
@property (retain, nonatomic) TIInputManagerHandwriting *manager;
@property (retain, nonatomic) NSString *history;
@property (retain, nonatomic) CHRecognizer *recognizer;

+ (int)autoCorrectionModeForKeyboardAutoCorrectionType:(unsigned long long)a0;
+ (int)capitalizationModeForKeyboardAutoCapitalizationType:(unsigned long long)a0;
+ (id)drawingWithStrokes:(id)a0;
+ (int)recognitionContentTypeForKeyboardState:(id)a0;
+ (id)recognitionResultsForDrawing:(id)a0 withRecognizer:(id)a1 history:(id)a2 shouldCancel:(id /* block */)a3;
+ (id)textRecognitionResultsForDrawing:(id)a0 withRecognizer:(id)a1 keyboardState:(id)a2 history:(id)a3 shouldCancel:(id /* block */)a4;

- (void)dealloc;
- (void)main;
- (void).cxx_destruct;
- (id)initWithInputManager:(id)a0 strokes:(id)a1 history:(id)a2;

@end
