@class NSMutableDictionary, NSMutableIndexSet;
@protocol _UICollectionLayoutAuxillaryOffsets;

@interface _UICollectionPreferredSizes : NSObject <NSCopying> {
    NSMutableDictionary *_sizes;
    NSMutableIndexSet *_indexes;
    NSMutableDictionary *_supplementarySizesDict;
    long long _frameOffset;
    id<_UICollectionLayoutAuxillaryOffsets> _supplementaryBaseOffsets;
    struct CGSize { double width; double height; } _largestItemSize;
}

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
