@interface _UICollectionLayoutSectionGeometryTranslator : NSObject {
    unsigned long long _layoutAxis;
    BOOL _layoutRTL;
    struct CGPoint { double x; double y; } _contentFrameOffset;
    struct NSDirectionalEdgeInsets { double top; double leading; double bottom; double trailing; } _sectionInsets;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _primaryContentFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _contentFrameIncludingAuxiliaries;
}

- (id)description;

@end
