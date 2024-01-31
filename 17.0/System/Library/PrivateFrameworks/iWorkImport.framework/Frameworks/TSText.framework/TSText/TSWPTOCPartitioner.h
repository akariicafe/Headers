@class TSWPTOCInfo;

@interface TSWPTOCPartitioner : NSObject <TSDPartitioner>

@property (readonly, weak, nonatomic) TSWPTOCInfo *info;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } totalPartitionFrame;

- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;
- (id)hintForLayout:(id)a0;
- (id)layoutForHint:(id)a0 parentLayout:(id)a1;
- (id)nextHintForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (id)nextLayoutForSize:(struct CGSize { double x0; double x1; })a0 parentLayout:(id)a1 previousHint:(id)a2 horizontally:(BOOL)a3 outFinished:(out BOOL *)a4;
- (BOOL)didHint:(id)a0 syncWithNextHint:(id)a1 horizontally:(BOOL)a2;
- (void)setLayoutPartititionsRightToLeft:(BOOL)a0 contentPartitionsRightToLeft:(BOOL)a1;

@end
