@interface AEAssessmentUIConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=shouldPresentDisplayShields) BOOL presentDisplayShields;
@property (readonly, nonatomic, getter=shouldCaptureDisplays) BOOL captureDisplays;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPresentDisplayShields:(BOOL)a0 captureDisplays:(BOOL)a1;

@end
