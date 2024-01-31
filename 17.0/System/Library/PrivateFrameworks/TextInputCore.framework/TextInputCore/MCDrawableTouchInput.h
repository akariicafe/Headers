@class NSArray;

@interface MCDrawableTouchInput : MCTouchInput

@property (readonly, nonatomic) struct RefPtr<TI::Favonius::CMTouchHistory> { struct CMTouchHistory *m_ptr; } touchHistory;
@property (readonly, nonatomic) BOOL isInflectionPoint;
@property (readonly, nonatomic) NSArray *nearbyKeys;

- (id).cxx_construct;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 timestamp:(double)a2;
- (id)initWithTouchPoint:(struct CGPoint { double x0; double x1; })a0 radius:(double)a1 timestamp:(double)a2 inflectionPoint:(BOOL)a3 touchHistory:(const void *)a4;

@end
