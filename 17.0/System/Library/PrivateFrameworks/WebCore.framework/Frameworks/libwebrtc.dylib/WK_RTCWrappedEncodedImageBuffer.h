@interface WK_RTCWrappedEncodedImageBuffer : NSObject

@property (nonatomic) struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface *ptr_; } buffer;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithEncodedImageBuffer:(struct scoped_refptr<webrtc::EncodedImageBufferInterface> { struct EncodedImageBufferInterface *x0; })a0;

@end
