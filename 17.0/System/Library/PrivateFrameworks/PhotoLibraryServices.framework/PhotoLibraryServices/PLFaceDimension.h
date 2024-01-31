@interface PLFaceDimension : NSObject <PFPhotosFaceRepresentation> {
    long long _sourceWidth;
    long long _sourceHeight;
    double _centerX;
    double _centerY;
    double _size;
    double _bodyCenterX;
    double _bodyCenterY;
    double _bodyWidth;
    double _bodyHeight;
}

- (id)description;
- (double)photosFaceRepresentationCenterX;
- (double)photosFaceRepresentationQuality;
- (double)photosFaceRepresentationCenterY;
- (id)initWithSourceWidth:(long long)a0 sourceHeight:(long long)a1 bodyCenterX:(double)a2 bodyCenterY:(double)a3 bodyWidth:(double)a4 bodyHeight:(double)a5;
- (id)initWithSourceWidth:(long long)a0 sourceHeight:(long long)a1 centerX:(double)a2 centerY:(double)a3 size:(double)a4;
- (id)initWithSourceWidth:(long long)a0 sourceHeight:(long long)a1 centerX:(double)a2 centerY:(double)a3 size:(double)a4 bodyCenterX:(double)a5 bodyCenterY:(double)a6 bodyWidth:(double)a7 bodyHeight:(double)a8;
- (double)photosFaceRepresentationBlurScore;
- (double)photosFaceRepresentationBodyCenterX;
- (double)photosFaceRepresentationBodyCenterY;
- (double)photosFaceRepresentationBodyHeight;
- (double)photosFaceRepresentationBodyWidth;
- (long long)photosFaceRepresentationClusterSequenceNumber;
- (BOOL)photosFaceRepresentationHasSmile;
- (BOOL)photosFaceRepresentationIsLeftEyeClosed;
- (BOOL)photosFaceRepresentationIsRightEyeClosed;
- (id)photosFaceRepresentationLocalIdentifier;
- (long long)photosFaceRepresentationQualityMeasure;
- (double)photosFaceRepresentationRoll;
- (double)photosFaceRepresentationSize;
- (long long)photosFaceRepresentationSourceHeight;
- (long long)photosFaceRepresentationSourceWidth;

@end
