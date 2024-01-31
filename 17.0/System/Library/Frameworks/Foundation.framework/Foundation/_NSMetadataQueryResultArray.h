@interface _NSMetadataQueryResultArray : NSArray {
    id _query;
    int _rc;
}

- (id)retain;
- (void)dealloc;
- (unsigned long long)retainCount;
- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (oneway void)release;

@end
