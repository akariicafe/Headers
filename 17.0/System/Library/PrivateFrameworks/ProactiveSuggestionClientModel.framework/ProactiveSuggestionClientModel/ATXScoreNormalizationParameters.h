@class NSNumber;

@interface ATXScoreNormalizationParameters : NSObject

@property (readonly, nonatomic) NSNumber *bufferSize;

- (id)init;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBufferSize:(id)a0;
- (BOOL)isEqualToATXScoreNormalizationParameters:(id)a0;

@end
