@interface BPSApproximateDistinctCount : NSObject <NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct hll_state { unsigned char x0[32]; } *_hllState;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double approximateDistinctCount;
@property (nonatomic) BOOL countMapFull;

- (id)init;
- (void)addValue:(unsigned int)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (void)addData:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithHllState:(struct hll_state { unsigned char x0[32]; } *)a0;
- (void)printState;

@end
