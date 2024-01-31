@class NSArray, CKChatItem, NSMutableArray;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _targetFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _currentFrame;
    double _easing;
    double _targetEasing;
    char _orientation;
    double _initialBalloonOffsetX;
    double _currentBalloonOffsetX;
    double _targetCenterY;
    double _currentCenterY;
    double _height;
    double _factor;
    BOOL _hidden;
    double _associatedVerticalShift;
    NSMutableArray *_associatedLayoutAttributes;
    CKTranscriptCollectionViewLayoutAttributes *_initialParentLayoutAttributes;
    NSArray *_threadGroupLayoutAttributes;
}

@property (retain, nonatomic) CKChatItem *chatItem;
@property (nonatomic) struct CGSize { double width; double height; } parentChatItemSize;
@property (nonatomic) double parentRotationOffset;
@property (readonly, nonatomic) struct CATransform3D { double m11; double m12; double m13; double m14; double m21; double m22; double m23; double m24; double m31; double m32; double m33; double m34; double m41; double m42; double m43; double m44; } contentTransform3D;
@property (nonatomic, getter=isInsertingReply) BOOL insertingReply;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLayoutAttributes:(id)a0;
- (void)setAlphaOrFilterLevel:(double)a0;

@end
