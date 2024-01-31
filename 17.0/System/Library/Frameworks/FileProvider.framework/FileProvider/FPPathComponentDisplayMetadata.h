@class NSString, NSURL;

@interface FPPathComponentDisplayMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *suffix;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSURL *bundleURL;
@property (readonly, nonatomic) NSString *bundleID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 displayName:(id)a1 suffix:(id)a2 bundleID:(id)a3 bundleURL:(id)a4;

@end
