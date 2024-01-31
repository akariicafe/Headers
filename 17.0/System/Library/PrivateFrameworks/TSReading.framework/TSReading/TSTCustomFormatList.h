@class NSMutableDictionary;

@interface TSTCustomFormatList : TSTTableDataList {
    NSMutableDictionary *mNamesList;
}

- (id)init;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (long long)count;
- (unsigned int)addCustomFormat:(void *)a0 duringImport:(BOOL)a1;
- (unsigned int)addCustomFormat:(void *)a0 withOldKey:(unsigned int)a1;
- (id)allNumberKeys;
- (void *)customFormatForKey:(unsigned int)a0;
- (id)customFormatWrapperForKey:(unsigned int)a0;
- (unsigned int)maxKey;
- (id)newUniqueNameFromName:(id)a0;
- (id)newUniqueNameFromName:(id)a0 preserveSeed:(BOOL)a1;
- (void)p_setupNamesList;
- (BOOL)supportsIDMapForType:(int)a0;

@end
