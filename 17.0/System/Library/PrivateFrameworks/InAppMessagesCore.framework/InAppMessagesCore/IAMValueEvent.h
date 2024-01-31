@protocol NSCopying;

@interface IAMValueEvent : IAMEvent

@property (copy, nonatomic) id<NSCopying> value;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 value:(id)a1;

@end
