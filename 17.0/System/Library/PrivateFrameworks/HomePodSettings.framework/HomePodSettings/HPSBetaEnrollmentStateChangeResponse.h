@interface HPSBetaEnrollmentStateChangeResponse : COMessageChannelResponse {
    void /* unknown type, empty encoding */ state;
    void /* unknown type, empty encoding */ success;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
