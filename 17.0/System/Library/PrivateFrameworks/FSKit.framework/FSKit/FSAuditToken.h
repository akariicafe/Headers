@interface FSAuditToken : NSObject <NSSecureCoding> {
    struct { unsigned int val[8]; } _token;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int ruid;
@property (readonly, nonatomic) unsigned int euid;
@property (readonly, nonatomic) unsigned int rgid;
@property (readonly, nonatomic) unsigned int egid;
@property (readonly, nonatomic) int pid;
@property (readonly, nonatomic) int pidversion;

+ (id)new;
+ (id)newWithData:(id)a0;
+ (id)newWithToken:(struct { unsigned int x0[8]; })a0;

- (id)initWithToken:(const struct { unsigned int x0[8]; } *)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;

@end
