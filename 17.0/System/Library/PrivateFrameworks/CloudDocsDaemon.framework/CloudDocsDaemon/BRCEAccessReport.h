@interface BRCEAccessReport : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned short st_mode;
@property unsigned int st_uid;
@property unsigned int st_gid;
@property unsigned int st_flags;
@property unsigned int protection_class;
@property BOOL has_acls;
@property unsigned long long incidents;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
