@interface SCRCPhotoEvaluatorResultBlur : SCRCPhotoEvaluatorResult

@property (readonly, nonatomic) double blurLevel;

- (id)humanReadableResult;
- (id)initWithBlurLevel:(double)a0;

@end
