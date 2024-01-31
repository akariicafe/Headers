@interface SKUIStorePageItemPinningConfiguration : NSObject

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } pinningContentInset;
@property (readonly, nonatomic) BOOL hasValidPinningContentInset;
@property (nonatomic) long long pinningStyle;
@property (nonatomic) long long pinningGroup;
@property (readonly, nonatomic) BOOL hasValidPinningStyle;
@property (readonly, nonatomic) BOOL hasValidPinningGroup;
@property (nonatomic) long long pinningTransitionStyle;
@property (readonly, nonatomic) BOOL hasValidPinningTransitionStyle;

- (void)invalidatePinningContentInset;
- (void)invalidatePinningGroup;
- (void)invalidatePinningStyle;
- (void)invalidatePinningTransitionStyle;

@end
