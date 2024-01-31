@class NSMutableArray, ATXScoreNormalizationParameters;

@interface ATXScoreNormalizationModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableArray *circularBuffer;
@property int bufferHead;
@property int bufferSize;
@property (nonatomic) BOOL isBufferSorted;
@property (retain, nonatomic) ATXScoreNormalizationParameters *parameters;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)addScore:(id)a0;
- (id)initWithParameters:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)resetBuffer;
- (id)normalizeScore:(id)a0;
- (void)getStateReadyForNormalization;
- (id)initWithParameters:(id)a0 circularBuffer:(id)a1 bufferHead:(int)a2 isBufferSorted:(BOOL)a3;

@end
