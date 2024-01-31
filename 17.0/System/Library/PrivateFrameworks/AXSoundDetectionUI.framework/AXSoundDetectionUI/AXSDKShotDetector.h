@class NSString;

@interface AXSDKShotDetector : AXSDDetector <NSSecureCoding> {
    NSString *_customName;
    NSString *_kshotCategory;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *category;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void)addRecording:(id)a0;
- (id)initWithName:(id)a0;
- (id)description;
- (unsigned long long)contentVersion;
- (void).cxx_destruct;
- (unsigned long long)compatibilityVersion;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isCustom;
- (BOOL)isEqualToKShotDetector:(id)a0;
- (BOOL)isModelReady;
- (BOOL)isTrainingComplete;
- (id)modelURLString;
- (id)recordings;
- (void)setRecordings:(id)a0;

@end
