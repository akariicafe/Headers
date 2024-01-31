@class NSDate;

@interface GEOAlmanacRiseTransitSet : NSObject {
    struct _GEORiseTransitSetEvent { double JD; unsigned int type; } _rise;
    struct _GEORiseTransitSetEvent { double JD; unsigned int type; } _transit;
    struct _GEORiseTransitSetEvent { double JD; unsigned int type; } _set;
}

@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) NSDate *transit;
@property (readonly, nonatomic) NSDate *set;
@property (readonly, nonatomic) BOOL isIdeal;
@property (readonly, nonatomic) struct _GEORiseTransitSetEvent { double x0; unsigned int x1; } firstItem;
@property (readonly, nonatomic) struct _GEORiseTransitSetEvent { double x0; unsigned int x1; } lastItem;

- (id).cxx_construct;
- (id)description;
- (id)initWithRise:(const struct _GEORiseTransitSetEvent { double x0; unsigned int x1; } *)a0 transit:(const struct _GEORiseTransitSetEvent { double x0; unsigned int x1; } *)a1 set:(const struct _GEORiseTransitSetEvent { double x0; unsigned int x1; } *)a2;

@end
