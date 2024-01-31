@class SBAppLayout;

@interface SBSwitcherResizeGrabberLayoutAttributes : NSObject <NSCopying, NSMutableCopying>

@property (retain, nonatomic) SBAppLayout *leafAppLayout;
@property (nonatomic) unsigned long long edge;

+ (id)attributesWithLeafAppLayout:(id)a0 edge:(unsigned long long)a1;

- (id)_copy;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
