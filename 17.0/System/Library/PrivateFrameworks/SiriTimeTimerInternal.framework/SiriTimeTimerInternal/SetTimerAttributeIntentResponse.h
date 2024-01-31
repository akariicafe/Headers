@class SiriTimer;

@interface SetTimerAttributeIntentResponse : INIntentResponse

@property (nonatomic, retain) SiriTimer *updatedTimer;
@property (nonatomic) void /* unknown type, empty encoding */ code;

- (id)init;
- (id)initWithBackingStore:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCode:(long long)a0 userActivity:(id)a1;
- (id)initWithPropertiesByName:(id)a0;

@end
