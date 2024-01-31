@class NSString;

@interface AFSpeechLatticeMitigatorResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) float score;
@property (readonly, nonatomic) float threshold;
@property (readonly, nonatomic) float calibrationScale;
@property (readonly, nonatomic) float calibrationOffset;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResults:(id)a0 score:(float)a1 threshold:(float)a2;
- (id)initWithResults:(id)a0 score:(float)a1 threshold:(float)a2 calibrationScale:(float)a3 calibrationOffset:(float)a4;

@end
