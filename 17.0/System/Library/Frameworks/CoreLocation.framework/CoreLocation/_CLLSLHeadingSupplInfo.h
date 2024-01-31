@class _CLLSLMapRoadSegment;

@interface _CLLSLHeadingSupplInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) _CLLSLMapRoadSegment *roadSegment;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)descriptionWithMemberIndent:(id)a0 endIndent:(id)a1;

@end
