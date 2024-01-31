@class NSArray, UIView, MUConstraintLayoutInternal;

@interface MUConstraintLayout : NSObject

@property (readonly, nonatomic) MUConstraintLayoutInternal *internal;
@property (readonly, nonatomic) NSArray *layoutConstraints;
@property (readonly, nonatomic) NSArray *layoutGuides;
@property (nonatomic) long long mode;
@property (weak, nonatomic) UIView *viewForForwardingSetNeedsUpdateConstraints;

- (void)activate;
- (void).cxx_destruct;
- (void)prepare;
- (void)deactivate;
- (id)initWithInternal:(id)a0;

@end
