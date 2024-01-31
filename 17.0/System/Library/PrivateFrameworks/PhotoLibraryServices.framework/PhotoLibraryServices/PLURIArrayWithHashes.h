@class NSMutableArray;

@interface PLURIArrayWithHashes : NSObject

@property (nonatomic) struct __CFArray { } *uris;
@property (nonatomic) struct __CFArray { } *hashes;
@property (retain, nonatomic) NSMutableArray *attributeValues;
@property (retain, nonatomic) NSMutableArray *relationshipValues;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) BOOL isUpdate;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initForUpdates:(BOOL)a0;

@end
