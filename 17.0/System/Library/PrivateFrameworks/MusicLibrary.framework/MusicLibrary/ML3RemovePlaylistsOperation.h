@interface ML3RemovePlaylistsOperation : ML3DatabaseOperation

- (unsigned long long)type;
- (BOOL)_execute:(id *)a0;
- (BOOL)_removeSource:(int)a0 usingTransaction:(id)a1;
- (BOOL)_removePlaylistsWithPersistentIDs:(id)a0 fromSource:(int)a1 usingTransaction:(id)a2;
- (BOOL)_removeRemotePlaylistsWithNoSourceUsingTransation:(id)a0;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:(id *)a0;

@end
