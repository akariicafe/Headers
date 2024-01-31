@class NSString, CTDataUsed;

@interface CTAppDataUsage : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) CTDataUsed *used;

- (id)usage;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init:(id)a0 withDisplayName:(id)a1 andUsage:(id)a2;

@end
