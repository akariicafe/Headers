@class UIListSeparatorConfiguration;

@interface _UICollectionLayoutListSectionData : NSObject {
    UIListSeparatorConfiguration *_separatorConfiguration;
    unsigned long long _selectionGrouping;
}

- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
