@class NSString, NSObject;

@interface BCSBusinessCallerItemIdentifier : NSObject <NSCopying, NSSecureCoding, BCSItemIdentifying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long computedTruncatedHash;
@property (readonly, nonatomic) NSObject *itemIdentifier;
@property (readonly, nonatomic) long long truncatedHash;
@property (readonly, nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)_truncatedHashForPhoneNumber:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithPhoneNumber:(id)a0;
- (id)initWithTruncatedHash:(long long)a0;
- (BOOL)matchesItemIdentifying:(id)a0;

@end
