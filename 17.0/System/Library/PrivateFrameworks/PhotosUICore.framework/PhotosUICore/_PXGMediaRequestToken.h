@class PXMediaProvider;

@interface _PXGMediaRequestToken : NSObject

@property (readonly, nonatomic) PXMediaProvider *mediaProvider;
@property (readonly, nonatomic) long long mediaRequestID;

- (void).cxx_destruct;
- (id)initWithMediaProvider:(id)a0 mediaRequestID:(long long)a1;

@end
