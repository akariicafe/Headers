@class NSValue, NSString;

@interface PDBuildMapKey : NSObject <NSCopying> {
    NSValue *mDrawableValue;
    NSString *mGroupId;
}

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)setGroupId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)groupId;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)drawable;
- (void)setDrawable:(id)a0;
- (id)initWithDrawable:(id)a0 groupId:(id)a1;

@end
