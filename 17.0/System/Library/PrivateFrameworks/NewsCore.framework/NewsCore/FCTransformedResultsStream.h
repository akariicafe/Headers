@class NSString;
@protocol FCStreaming;

@interface FCTransformedResultsStream : NSObject <FCStreaming>

@property (retain, nonatomic) id<FCStreaming> stream;
@property (copy, nonatomic) id /* block */ asyncTransformBlock;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fetchMoreResultsWithLimit:(unsigned long long)a0 qualityOfService:(long long)a1 callbackQueue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithStream:(id)a0 asyncTransformBlock:(id /* block */)a1;

@end
