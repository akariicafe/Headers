@class NSString, NSIndexPath;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSIndexPath *_indexPath;
    NSString *_identifier;
    BOOL _isClone;
    unsigned long long _type;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
