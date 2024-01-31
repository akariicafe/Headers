@class NSArray;

@interface _UICollectionCompositionalLayoutSolverOptions : NSObject {
    BOOL _layoutRTL;
    BOOL _roundsToScreenScale;
    double _interSectionSpacing;
    Class _layoutAttributesClass;
    Class _invalidationContextClass;
    id /* block */ _invalidationHandler;
    NSArray *_globalSupplementaryItems;
    id /* block */ _decorationRegistrationHandler;
    id /* block */ _sectionSolveErrorHandler;
}

- (void).cxx_destruct;

@end
