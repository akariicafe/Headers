@interface _MPHomeSharingArtworkCacheKey : NSObject

@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithPersistentID:(unsigned long long)a0 size:(struct CGSize { double x0; double x1; })a1;

@end
