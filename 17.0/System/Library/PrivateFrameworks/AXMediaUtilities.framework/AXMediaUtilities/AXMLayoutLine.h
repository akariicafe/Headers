@class NSMutableArray;

@interface AXMLayoutLine : AXMLayoutItem {
    NSMutableArray *_sequences;
}

+ (id)line:(id)a0;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (id)sequences;
- (void)addSequence:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedFrame;
- (id)recognizedTextFeatures;

@end
