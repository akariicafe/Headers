@class NSSet, NSHashTable;

@interface MRUImageLoaderCoordinator : NSObject

@property (readonly, nonatomic) NSHashTable *loaders;
@property (nonatomic) struct CGSize { double width; double height; } requestSize;
@property (retain, nonatomic) NSSet *registeredLoaderArtworkIdentifiers;

+ (id)sharedCoordinator;

- (id)init;
- (void).cxx_destruct;
- (void)registerLoader:(id)a0;
- (void)recalculateArtworkIdentifiers;
- (void)recalculateRequestSize;
- (void)registeredLoaderArtworkIdentifierDidChange:(id)a0;
- (void)registeredLoaderFittingSizeDidChange:(id)a0;
- (void)unregisterLoader:(id)a0;

@end
