@class NSArray;

@interface SPItemSharingDataIntegrity : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *ownedCircles;
@property (copy, nonatomic) NSArray *memberCircles;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithOwnedCircles:(id)a0 memberCircles:(id)a1;

@end
