@class WDDocument, NSMutableArray;

@interface WDList : NSObject {
    WDDocument *mDocument;
    NSMutableArray *mLevelOverrides;
}

@property (readonly, nonatomic) int listId;
@property (readonly, nonatomic) int listDefinitionId;

- (id)description;
- (void).cxx_destruct;
- (id)addLevelOverrideWithLevel:(unsigned char)a0;
- (id)initWithDocument:(id)a0 listId:(int)a1 listDefinitionId:(int)a2;
- (BOOL)isAnyListLevelOverridden;
- (id)levelOverrideAt:(unsigned long long)a0;
- (unsigned long long)levelOverrideCount;
- (id)levelOverrideForLevel:(unsigned char)a0;
- (id)levelOverrides;
- (void)removeLevelOverride:(id)a0;

@end
