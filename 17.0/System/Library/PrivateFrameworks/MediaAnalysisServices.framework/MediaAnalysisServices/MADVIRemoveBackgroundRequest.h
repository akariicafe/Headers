@class NSNumber;

@interface MADVIRemoveBackgroundRequest : MADRequest

@property (copy, nonatomic) NSNumber *imageType;
@property (nonatomic) BOOL performInPlace;
@property (nonatomic) BOOL cropToFit;
@property (nonatomic) BOOL returnMask;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
