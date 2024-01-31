@interface Settings.CloudSyncConfiguration : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ storeIdentifier;
    void /* unknown type, empty encoding */ displayName;
    void /* unknown type, empty encoding */ message;
    void /* unknown type, empty encoding */ redirectURL;
    void /* unknown type, empty encoding */ redirectTitle;
    void /* unknown type, empty encoding */ platforms;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
