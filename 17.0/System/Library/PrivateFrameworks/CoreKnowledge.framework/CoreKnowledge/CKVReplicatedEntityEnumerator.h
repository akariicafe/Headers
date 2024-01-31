@interface CKVReplicatedEntityEnumerator : NSObject {
    void /* unknown type, empty encoding */ itemType;
    void /* unknown type, empty encoding */ originAppId;
    void /* unknown type, empty encoding */ userId;
    void /* unknown type, empty encoding */ stateEnumerator;
    void /* unknown type, empty encoding */ stateVector;
    void /* unknown type, empty encoding */ lastStateVector;
    void /* unknown type, empty encoding */ itemUpdateRecords;
    void /* unknown type, empty encoding */ iterator;
    void /* unknown type, empty encoding */ presentClocks;
    void /* unknown type, empty encoding */ removedClocks;
    void /* unknown type, empty encoding */ enumeratedCount;
}

- (id)init;
- (id)next;
- (void).cxx_destruct;
- (BOOL)hasNext;
- (id)initFor:(id)a0 lastBookmark:(id)a1;
- (id)nextBookmark;

@end
