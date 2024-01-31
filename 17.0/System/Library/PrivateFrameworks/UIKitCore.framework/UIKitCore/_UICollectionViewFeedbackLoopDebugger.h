@interface _UICollectionViewFeedbackLoopDebugger : NSObject {
    void /* unknown type, empty encoding */ currentlyTrackedChangeRecords;
    void /* unknown type, empty encoding */ invalidationRecords;
    void /* unknown type, empty encoding */ updateVisibleCellsRecords;
}

- (id)init;
- (void).cxx_destruct;
- (void)recordGenericChangeWithMessage:(id)a0;
- (void)printCollectedRecordsAndRaiseException:(id)a0;
- (void)recordCollectionViewInsetsPropertyChange:(id)a0 fromInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1 toInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2;
- (void)recordCollectionViewRectPropertyChange:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 toRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)recordInvalidationWithContext:(id)a0;
- (void)recordPreferredAttributesChangeForElementWithAttributes:(id)a0 reason:(id)a1 changedAttribute:(id)a2 fromValue:(id)a3 toValue:(id)a4 layoutGeneratedValue:(id)a5;
- (void)recordUpdateVisibleCellsScheduledWithCallStack:(id)a0;

@end
