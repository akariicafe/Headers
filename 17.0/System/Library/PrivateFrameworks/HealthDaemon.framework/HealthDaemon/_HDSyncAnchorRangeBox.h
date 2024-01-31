@interface _HDSyncAnchorRangeBox : NSObject <NSSecureCoding, NSCopying> {
    struct HDSyncAnchorRange { long long start; long long end; } _anchorRange;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
