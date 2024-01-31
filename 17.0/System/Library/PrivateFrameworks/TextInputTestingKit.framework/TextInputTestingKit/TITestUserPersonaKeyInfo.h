@class TIGaussianErrorGenerator, TIFitAffineMLLMatrixWrapper;

@interface TITestUserPersonaKeyInfo : NSObject

@property (nonatomic) struct CGPoint { double x; double y; } center;
@property (retain, nonatomic) TIGaussianErrorGenerator *errorGenerator;
@property (retain, nonatomic) TIFitAffineMLLMatrixWrapper *rotationMatrix;

- (id)description;
- (void).cxx_destruct;

@end
