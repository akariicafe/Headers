@class NSString;

@interface SEService.ReservationState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ counts;
    void /* unknown type, empty encoding */ reservations;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *debugDescription;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
