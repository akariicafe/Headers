@class NSData, NSMutableArray, NSString;

@interface LiveFSFPTrashObserver : NSObject <NSFileProviderEnumerationObserver>

@property (retain) NSMutableArray *items;
@property (copy) id /* block */ completionHandler;
@property (readonly, retain) NSData *lastPage;
@property (readonly, nonatomic) long long suggestedPageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithCompletionHandler:(id /* block */)a0;

@end
