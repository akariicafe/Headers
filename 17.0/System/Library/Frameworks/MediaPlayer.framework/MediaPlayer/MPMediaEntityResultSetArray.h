@class MPMediaLibrary, MPMediaQuerySectionInfo, MPMediaQueryCriteria, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, MPMediaLibraryResultSet;

@interface MPMediaEntityResultSetArray : MPMediaArray <NSCopying> {
    Class _entityClass;
    MPMediaLibrary *_library;
    MPMediaQuerySectionInfo *_sectionInfo;
    NSMutableArray *_entities;
    NSObject<OS_dispatch_queue> *_entitiesQueue;
    MPMediaQueryCriteria *_queryCriteria;
    long long _revision;
}

@property (readonly, nonatomic) id<MPMediaLibraryResultSet> resultSet;

- (id)objectAtIndex:(unsigned long long)a0;
- (unsigned long long)count;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResultSet:(id)a0 queryCriteria:(id)a1 entityType:(long long)a2 library:(id)a3;
- (BOOL)isQueryResultSetInvalidated;
- (id)sectionInfo;

@end
