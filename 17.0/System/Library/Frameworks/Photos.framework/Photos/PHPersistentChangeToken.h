@class NSPersistentHistoryToken;

@interface PHPersistentChangeToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSPersistentHistoryToken *persistentHistoryToken;
@property (readonly, nonatomic) int version;

+ (int)currentVersion;
+ (id)currentTokenForContext:(id)a0;
+ (id)tokenWithPersistentHistoryToken:(id)a0;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPersistentHistoryToken:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToPersistentChangeToken:(id)a0;
- (id)initWithPersistentHistoryToken:(id)a0 version:(int)a1;

@end
