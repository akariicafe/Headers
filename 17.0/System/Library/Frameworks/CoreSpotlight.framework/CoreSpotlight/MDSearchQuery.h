@class CSSearchQuery, NSString, NSDictionary, NSPredicate, NSObject;
@protocol OS_dispatch_queue, MDSearchQueryDelegate;

@interface MDSearchQuery : NSObject {
    unsigned long long _status;
}

@property (copy) NSPredicate *predicate;
@property unsigned long long status;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) CSSearchQuery *query;
@property (retain) NSString *clientBundleID;
@property (readonly, copy) NSDictionary *options;
@property (weak) id<MDSearchQueryDelegate> delegate;

- (id)queryString;
- (void)start;
- (void)_didFinishWithError:(id)a0;
- (id)initWithQueryString:(id)a0 options:(id)a1;
- (void).cxx_destruct;
- (void)cancel;
- (void)_didReturnItems:(id)a0;
- (id)initWithPredicate:(id)a0 options:(id)a1;

@end
