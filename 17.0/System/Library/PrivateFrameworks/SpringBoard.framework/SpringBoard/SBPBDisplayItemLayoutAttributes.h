@interface SBPBDisplayItemLayoutAttributes : PBCodable <NSCopying> {
    double _centerX;
    double _centerY;
    long long _contentOrientation;
    long long _lastInteractionTime;
    double _referenceBoundsHeightBeforeOverlapping;
    double _referenceBoundsHeightForSize;
    double _referenceBoundsWidthBeforeOverlapping;
    double _referenceBoundsWidthForSize;
    double _sizeHeight;
    double _sizeWidth;
    long long _sizingPolicy;
    double _userSizeBeforeOverlappingInBoundsHeight;
    double _userSizeBeforeOverlappingInBoundsWidth;
    int _semanticSizeTypeBeforeOverlapping;
    int _semanticSizeTypeForSize;
    BOOL _positionIsSystemManaged;
}

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
