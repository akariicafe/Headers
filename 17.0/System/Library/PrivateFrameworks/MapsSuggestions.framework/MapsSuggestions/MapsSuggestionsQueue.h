@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsQueue : NSObject <MapsSuggestionsObject> {
    struct unique_ptr<MSg::Queue, std::default_delete<MSg::Queue>> { struct __compressed_pair<MSg::Queue *, std::default_delete<MSg::Queue>> { struct Queue *__value_; } __ptr_; } _cppQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *innerQueue;
@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serialQueueWithName:(id)a0;

- (id)syncReturningBlock:(id /* block */)a0;
- (void)asyncBlock:(id /* block */)a0;
- (id).cxx_construct;
- (id)initSerialQueueWithName:(id)a0;
- (void)syncBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)syncBOOLReturningBlock:(id /* block */)a0;

@end
