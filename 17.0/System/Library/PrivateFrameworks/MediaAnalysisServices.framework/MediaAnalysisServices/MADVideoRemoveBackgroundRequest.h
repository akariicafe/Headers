@class NSArray, UTType, NSValue, MADVideoRemoveBackgroundResult, NSNumber;

@interface MADVideoRemoveBackgroundRequest : MADVideoRequest

@property (copy, nonatomic) NSNumber *maxDimension;
@property (copy, nonatomic) NSNumber *minDimension;
@property (copy, nonatomic) NSNumber *maxFileSize;
@property (copy, nonatomic) NSValue *instancePoint;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } maskTime;
@property (copy, nonatomic) UTType *outputType;
@property (copy, nonatomic) NSArray *stickerIdentifiers;
@property (readonly, nonatomic) MADVideoRemoveBackgroundResult *result;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
