@protocol _UITextViewContentPaddingDelegate;

@interface _UITextViewContentPadding : NSObject

@property (weak, nonatomic) id<_UITextViewContentPaddingDelegate> delegate;
@property (nonatomic) long long mode;
@property (nonatomic) double targetValue;
@property (readonly, nonatomic) double currentValue;

- (void)_checkNewCurrentValue;
- (void)increaseToValue:(double)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)resetCurrentValue;

@end
