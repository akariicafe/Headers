@protocol ResourceArbiterClientDelegate;

@interface BaseResourceArbiterClient : NSObject

@property (weak, nonatomic) id<ResourceArbiterClientDelegate> delegate;

- (void)releaseResourceAccess;
- (void).cxx_destruct;
- (BOOL)asynchRequestResourceAccess:(BOOL)a0;
- (BOOL)synchRequestResourceAccess;

@end
