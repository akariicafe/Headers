@interface CPSystemCoordinatorState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ localParticipantState;
    void /* unknown type, empty encoding */ groupImmersionStyle;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
