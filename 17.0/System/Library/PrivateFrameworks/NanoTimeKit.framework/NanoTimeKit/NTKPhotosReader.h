@class NSString;
@protocol NTKPhotosReaderDelegate;

@interface NTKPhotosReader : NSObject <NSFastEnumeration>

@property (retain, nonatomic) NSString *assetCollectionIdentifier;
@property (nonatomic) unsigned long long mutationCount;
@property (readonly, nonatomic) NSString *resourceDirectory;
@property (weak, nonatomic) id<NTKPhotosReaderDelegate> delegate;
@property (readonly, nonatomic) unsigned long long count;

+ (id)readerForMemoriesWithResourceDirectory:(id)a0;
+ (id)readerForResourceDirectory:(id)a0;
+ (id)readerForSyncedAlbumWithResourceDirectory:(id)a0;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)objectAtIndex:(unsigned long long)a0;
- (id)lastObject;
- (id)firstObject;
- (void).cxx_destruct;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x0; id *x1; unsigned long long *x2; unsigned long long x3[5]; } *)a0 objects:(id *)a1 count:(unsigned long long)a2;
- (id)initWithResourceDirectory:(id)a0;

@end
