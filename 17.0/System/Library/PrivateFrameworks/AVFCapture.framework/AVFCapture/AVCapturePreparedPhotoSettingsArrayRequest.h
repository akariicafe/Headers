@class NSArray;

@interface AVCapturePreparedPhotoSettingsArrayRequest : NSObject {
    unsigned long long _requestID;
    NSArray *_photoSettingsArray;
}

@property (readonly) unsigned long long requestID;
@property (readonly) NSArray *photoSettingsArray;
@property (readonly) id /* block */ completionHandler;
@property (nonatomic, getter=isCompleted) BOOL completed;

+ (id)preparedPhotoSettingsArrayRequestWithArray:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (id)_initWithArray:(id)a0 completionHandler:(id /* block */)a1;
- (void)_setRequestID:(unsigned long long)a0;

@end
