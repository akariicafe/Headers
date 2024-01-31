@class NSArray, CHRecognizer, CHCornerDetector;
@protocol CHRecognizing;

@interface CHTextCorrectionRecognizer : NSObject {
    id<CHRecognizing> __textRecognizer;
    CHRecognizer *__shapeRecognizer;
    CHCornerDetector *__cornerDetector;
}

@property (readonly, copy, nonatomic) NSArray *locales;
@property (readonly, nonatomic) BOOL isRemoteRecognition;

+ (id)_improvedSingleCharacterOneColumnTextResult:(id)a0 targetContentInfo:(id)a1 insertionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 locale:(id)a3 affectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a4;
+ (struct _NSRange { unsigned long long x0; unsigned long long x1; })defaultTextAffectedRangeForTargetContentInfo:(id)a0;

- (void).cxx_destruct;
- (id)initWithLocales:(id)a0 remoteRecognition:(BOOL)a1 priority:(long long)a2;
- (id)textCorrectionResultForDrawing:(id)a0 targetContentInfo:(id)a1 originalDrawing:(id)a2 lastStroke:(id)a3 localTypedContextBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a4 normalizedDrawingScaleFactor:(double)a5 previousCorrectionResult:(id)a6;

@end
