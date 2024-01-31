@class EKSeriesDetails;

@interface EKPostSliceDescription : EKSliceDescription

@property (copy) EKSeriesDetails *updatedMainSeriesDetails;
@property (copy) EKSeriesDetails *createdSeriesDetails;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOriginalSliceDescription:(id)a0;

@end
