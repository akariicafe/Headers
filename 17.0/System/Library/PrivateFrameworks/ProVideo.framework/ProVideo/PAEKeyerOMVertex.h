@class NSNumber;

@interface PAEKeyerOMVertex : NSObject <NSSecureCoding> {
    NSNumber *_lx;
    NSNumber *_mx;
    NSNumber *_rx;
    NSNumber *_bx;
    NSNumber *_ly;
    NSNumber *_my;
    NSNumber *_ry;
    NSNumber *_by;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (float)bx;
- (float)by;
- (float)lx;
- (float)ly;
- (float)mx;
- (float)my;
- (float)rx;
- (float)ry;
- (void)setBx:(id)a0;
- (void)setBy:(id)a0;
- (void)setLx:(id)a0;
- (void)setLy:(id)a0;
- (void)setMx:(id)a0;
- (void)setMy:(id)a0;
- (void)setRx:(id)a0;
- (void)setRy:(id)a0;

@end
