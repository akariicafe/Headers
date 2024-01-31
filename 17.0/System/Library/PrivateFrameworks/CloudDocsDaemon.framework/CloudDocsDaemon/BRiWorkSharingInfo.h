@interface BRiWorkSharingInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) char options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
