@class NSIndexPath;
@protocol _UIKeyShortcutHUDCollectionViewManagerClient;

@interface _UIKeyShortcutHUDIndexPath : NSObject

@property (weak, nonatomic) id<_UIKeyShortcutHUDCollectionViewManagerClient> client;
@property (retain, nonatomic) NSIndexPath *indexPath;

+ (id)hudIndexPathWithClient:(id)a0 indexPath:(id)a1;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
