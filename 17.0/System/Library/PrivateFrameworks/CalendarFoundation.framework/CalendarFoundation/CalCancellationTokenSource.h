@class NSString;
@protocol CalCancellationToken;

@interface CalCancellationTokenSource : NSObject <CalCancellationToken> {
    _Atomic BOOL _isCancelled;
}

@property (readonly, nonatomic) id<CalCancellationToken> token;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancel;

@end
