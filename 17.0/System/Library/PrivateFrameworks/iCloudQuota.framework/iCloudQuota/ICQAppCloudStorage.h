@class NSString, NSNumber, NSURL;

@interface ICQAppCloudStorage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSNumber *storageUsed;
@property (retain, nonatomic) NSURL *ruiURL;
@property (retain, nonatomic) NSURL *liftUIURL;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
