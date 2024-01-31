@interface CPSystemCoordinatorParticipantState : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ isSpatial;
    void /* unknown type, empty encoding */ isSpatialInitiator;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
