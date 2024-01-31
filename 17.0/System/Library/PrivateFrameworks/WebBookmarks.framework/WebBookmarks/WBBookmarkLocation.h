@class WBSCRDTPosition;

@interface WBBookmarkLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) WBSCRDTPosition *position;

- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithParentID:(int)a0 position:(id)a1;
- (id)locationWithPosition:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)locationWithParentID:(int)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
