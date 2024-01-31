@class NSString, NSNumber;

@interface ICASDrawingSnapshotItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1PencilStrokes;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV1FingerStrokes;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2PencilStrokes;
@property (readonly, nonatomic) NSNumber *countOfInlineDrawingV2FingerStrokes;
@property (readonly, nonatomic) NSNumber *countOfFullscreenDrawingStrokes;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCountOfInlineDrawingV1PencilStrokes:(id)a0 countOfInlineDrawingV1FingerStrokes:(id)a1 countOfInlineDrawingV2PencilStrokes:(id)a2 countOfInlineDrawingV2FingerStrokes:(id)a3 countOfFullscreenDrawingStrokes:(id)a4;

@end
