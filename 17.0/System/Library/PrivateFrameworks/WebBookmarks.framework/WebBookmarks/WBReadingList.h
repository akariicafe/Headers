@class NSObject, WBReadingListPrivate;
@protocol OS_dispatch_queue;

@interface WBReadingList : NSObject {
    WBReadingListPrivate *_private;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, readonly, nonatomic) WBReadingList *defaultReadingList;

+ (BOOL)supportsURL:(id)a0;

- (id)init;
- (id)_init;
- (void).cxx_destruct;
- (BOOL)addReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 error:(id *)a3;

@end
