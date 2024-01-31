@class NSArray;

@interface MADPersonIdentificationResult : MADResult

@property (readonly, nonatomic) long long frontCameraCaptureState;
@property (readonly, nonatomic) NSArray *resultItems;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithResultItems:(id)a0 frontCameraCaptureState:(long long)a1;

@end
