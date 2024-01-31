@class NSString;

@interface _TtCO15HomePodSettings13CarrySettings23DataModelUpdateResponse : COMessageChannelResponse {
    void /* unknown type, empty encoding */ success;
    void /* unknown type, empty encoding */ error;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
