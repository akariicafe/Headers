@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (BOOL)isUserVisible;
- (id)extendedAttributes;
- (unsigned char)itemScope;
- (id)parentItemID;
- (id)initWithZoneRootItemID:(id)a0 session:(id)a1;
- (BOOL)isShareableItem;
- (id)asFSRoot;
- (BOOL)isDirectoryFault;
- (BOOL)isFSRoot;
- (BOOL)isZoneRoot;
- (id)parentItemOnFS;
- (BOOL)saveToDB;
- (id)st;

@end
