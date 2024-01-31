@class TSTPopUpMenuModel;

@interface TSTTableDataMultipleChoiceList : TSTTableDataObject {
    TSTPopUpMenuModel *mPopUpMenuModel;
}

- (unsigned long long)hash;
- (void)dealloc;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithPopUpMenuModel:(id)a0;

@end
