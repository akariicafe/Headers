@class NSMutableArray;
@protocol VCMediaRecorderProtocol;

@interface VCMediaRecorderManagerStreamTokenClientList : NSObject {
    long long _streamToken;
}

@property (readonly, nonatomic) id<VCMediaRecorderProtocol> mediaRecorder;
@property (readonly, nonatomic) NSMutableArray *clientContextList;

+ (BOOL)isValidContext:(id)a0;
+ (long long)streamTokenFromClientContext:(id)a0;

- (void)dealloc;
- (void)removeContext:(id)a0;
- (id)initWithStreamToken:(long long)a0 mediaRecorder:(id)a1;
- (id)newContext;

@end
