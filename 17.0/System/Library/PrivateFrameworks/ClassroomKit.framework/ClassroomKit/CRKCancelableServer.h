@protocol CRKCancelable;

@interface CRKCancelableServer : NSObject

@property (readonly, copy, nonatomic) id /* block */ generator;
@property (retain, nonatomic) id<CRKCancelable> cachedCancelable;
@property (nonatomic) long long clientCount;

- (void).cxx_destruct;
- (void)decrementClientCount;
- (id)initWithCancelableGenerator:(id /* block */)a0;
- (id)makeCountedCancelable;
- (void)performBlockOnMainThreadIfNeeded:(id /* block */)a0;

@end
