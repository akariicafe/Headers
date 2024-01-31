@class NSMutableDictionary;

@interface TSTUidCoordsPerGroupValueTuple : NSObject {
    NSMutableDictionary *_uidCoordsPerTuple;
}

- (id)init;
- (void).cxx_destruct;
- (void)addUidCoord:(const struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; } *)a0 tupleForCoord:(id)a1 atRunningLevel:(unsigned char)a2;
- (struct TSKUIDStructCoord { struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x0; struct TSKUIDStruct { unsigned long long x0; unsigned long long x1; } x1; })uuidCoordForGroupTuple:(id)a0 runningLevel:(unsigned char)a1;

@end
