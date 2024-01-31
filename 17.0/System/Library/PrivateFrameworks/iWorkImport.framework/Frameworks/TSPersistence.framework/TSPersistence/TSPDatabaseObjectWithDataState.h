@interface TSPDatabaseObjectWithDataState : TSPDatabaseObject {
    long long _dataState;
}

- (id)fileURL;
- (long long)dataState;
- (id)fileState;
- (BOOL)hasDataState;
- (BOOL)hasFileState;
- (id)initWithIdentifier:(long long)a0 classType:(int)a1 dataState:(long long)a2;

@end
