@interface CHSReplicatedDescriptorsBox : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ descriptors;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
