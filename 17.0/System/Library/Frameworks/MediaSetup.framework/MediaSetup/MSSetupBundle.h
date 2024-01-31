@class NSUUID;

@interface MSSetupBundle : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSUUID *homeUserID;
@property (retain, nonatomic) NSUUID *homeID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithHomeID:(id)a0 homeUserID:(id)a1;

@end
