@interface LQMPredictionInternalRecord : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned int offset;
@property (readonly) unsigned int length;
@property (readonly) unsigned int level;
@property (readonly) double confidence;

- (id)initWithOffset:(unsigned int)a0 length:(unsigned int)a1 level:(unsigned int)a2 confidence:(double)a3;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void)adjustConfidenceTo:(double)a0;
- (void)adjustLengthTo:(unsigned int)a0;
- (void)adjustOffsetTo:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
