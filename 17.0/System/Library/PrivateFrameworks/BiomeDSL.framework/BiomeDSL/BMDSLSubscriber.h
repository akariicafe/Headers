@class NSString;

@interface BMDSLSubscriber : BMDSLBaseCodable <BMDSLSubscriber>

@property (readonly, copy, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (id)bpsSubscriber;

@end
