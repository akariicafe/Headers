@class NSString, NSArray;

@interface NSMetadataQueryResultGroup : NSObject {
    id _private[9];
    unsigned long long _private2[1];
    void *_reserved;
}

@property (readonly, copy) NSString *attribute;
@property (readonly, retain) id value;
@property (readonly, copy) NSArray *subgroups;
@property (readonly) unsigned long long resultCount;
@property (readonly, copy) NSArray *results;

- (void)dealloc;
- (void)_zapResultArray;
- (void)_addResult:(unsigned long long)a0;
- (id)_init:(id)a0 attributes:(id)a1 index:(unsigned long long)a2 value:(id)a3;
- (id)resultAtIndex:(unsigned long long)a0;

@end
