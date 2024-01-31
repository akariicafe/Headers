@interface FaceTimeMessageStore.XPCWrapper : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ data;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
