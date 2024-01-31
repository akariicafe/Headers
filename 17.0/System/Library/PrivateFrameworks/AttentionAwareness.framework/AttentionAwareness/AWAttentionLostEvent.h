@interface AWAttentionLostEvent : AWAttentionEvent <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double attentionLostTimeout;
@property (readonly, nonatomic) id associatedObject;

- (void)validateMask;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)a0;
- (id)initWithTimestamp:(double)a0 tagIndex:(unsigned long long)a1 attentionLostTimeout:(double)a2;
- (id)initWithCoder:(id)a0;

@end
