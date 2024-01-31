@class NSString;

@interface SFAccessControlEntry : NSObject <NSCopying, NSSecureCoding> {
    id _accessControlEntryInternal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (nonatomic, getter=isOwner) BOOL owner;
@property (nonatomic) BOOL canRead;
@property (nonatomic) BOOL canWrite;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBundleID:(id)a0 owner:(BOOL)a1 canRead:(BOOL)a2 canWrite:(BOOL)a3;

@end
