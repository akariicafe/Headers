@interface HSUpdateRequest : HSRequest {
    long long _connectionType;
}

+ (id)requestWithDatabaseRevision:(unsigned int)a0 sessionID:(unsigned int)a1 connectionType:(long long)a2;

- (double)timeoutInterval;
- (BOOL)isConcurrent;
- (id)_bodyDataForDatabaseRevision:(unsigned int)a0 sessionID:(unsigned int)a1;
- (id)canonicalResponseForResponse:(id)a0;
- (id)initWithDatabaseRevision:(unsigned int)a0 sessionID:(unsigned int)a1 connectionType:(long long)a2;

@end
