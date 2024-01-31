@class NSString;

@interface GKBasePlayer : NSObject <NSCopying>

@property (readonly, retain, nonatomic) NSString *playerID;
@property (readonly, nonatomic) NSString *displayName;

+ (BOOL)supportsSecureCoding;

- (id)playerID;
- (void)encodeWithCoder:(id)a0;
- (id)displayName;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
