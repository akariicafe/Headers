@class NSCharacterSet, CHDrawing;

@interface CHClassifiableDrawing : NSObject

@property (readonly, nonatomic) CHDrawing *drawing;
@property (readonly, nonatomic) NSCharacterSet *characterSet;
@property (readonly, nonatomic) BOOL expandCodePoints;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizationContext;
@property (readonly, nonatomic) unsigned long long maxCandidateCount;

- (void).cxx_destruct;
- (id)initWithDrawing:(id)a0 characterSet:(id)a1 expandCodePoints:(BOOL)a2 normalizationContext:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3 maxCandidateCount:(unsigned long long)a4;

@end
