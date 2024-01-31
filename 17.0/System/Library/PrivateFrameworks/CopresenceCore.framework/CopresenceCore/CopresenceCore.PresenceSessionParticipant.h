@class NSString;

@interface CopresenceCore.PresenceSessionParticipant : NSObject <NSSecureCoding, NSCoding> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ handle;
    void /* unknown type, empty encoding */ isCurrentDevice;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
