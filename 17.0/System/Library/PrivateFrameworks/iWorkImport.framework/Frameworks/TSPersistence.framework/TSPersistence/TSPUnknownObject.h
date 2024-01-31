@class NSString, NSArray, TSPLazyReferenceArray, NSObject;
@protocol OS_dispatch_data;

@interface TSPUnknownObject : TSPObject {
    struct shared_ptr<TSP::ArchiveInfo> { struct ArchiveInfo *__ptr_; struct __shared_weak_count *__cntrl_; } _archiveInfo;
    NSObject<OS_dispatch_data> *_messagesData;
    NSString *_packageLocator;
    TSPLazyReferenceArray *_objects;
    NSArray *_datas;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;

- (id)initWithContext:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)packageLocator;
- (void)willModify;
- (void)willModifyForUpgrade;
- (void)saveToArchiver:(id)a0;
- (BOOL)validatedLoadFromUnarchiver:(id)a0;

@end
