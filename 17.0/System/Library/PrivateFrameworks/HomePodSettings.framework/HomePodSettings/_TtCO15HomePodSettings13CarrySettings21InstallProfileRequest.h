@interface _TtCO15HomePodSettings13CarrySettings21InstallProfileRequest : COMessageChannelRequest {
    void /* unknown type, empty encoding */ audienceIdentifier;
    void /* unknown type, empty encoding */ profileData;
    void /* unknown type, empty encoding */ profileVariant;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
