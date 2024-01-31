@class NSString;

@interface ProximityAppleIDSetup.PASExtensionPickedAccount : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ dsid;
    void /* unknown type, empty encoding */ altDSID;
    void /* unknown type, empty encoding */ firstName;
    void /* unknown type, empty encoding */ lastName;
    void /* unknown type, empty encoding */ appleID;
    void /* unknown type, empty encoding */ accountUsername;
    void /* unknown type, empty encoding */ formattedUsername;
    void /* unknown type, empty encoding */ isMe;
    void /* unknown type, empty encoding */ imageData;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
