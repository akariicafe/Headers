@class NSError, NSMutableArray, NSString;
@protocol NAScheduler;

@interface MTCompanionSyncRequest : NSObject <MTSyncToken>

@property (nonatomic) unsigned long long requestType;
@property (nonatomic) BOOL completed;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSMutableArray *completionBlocks;
@property (retain, nonatomic) id<NAScheduler> serializer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithType:(unsigned long long)a0;

- (void)addCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (void)complete:(id)a0;
- (id)initWithRequestType:(unsigned long long)a0;
- (id)requestDescription;

@end
