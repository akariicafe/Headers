@class NSString, CPLResource, NSData, NSDate;

@interface CPLAdjustments : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *creatorCode;
@property (copy, nonatomic) NSString *adjustmentType;
@property (copy, nonatomic) NSString *adjustmentCompoundVersion;
@property (copy, nonatomic) NSString *adjustmentCreatorCode;
@property (copy, nonatomic) NSDate *adjustmentTimestamp;
@property (nonatomic) unsigned long long adjustmentSourceType;
@property (retain, nonatomic) NSData *simpleAdjustmentData;
@property (copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint;
@property (copy, nonatomic) NSString *otherAdjustmentsFingerprint;
@property (nonatomic) unsigned long long adjustmentRenderTypes;
@property (retain, nonatomic) CPLResource *adjustmentData;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)adjustmentSimpleDescription;

@end
