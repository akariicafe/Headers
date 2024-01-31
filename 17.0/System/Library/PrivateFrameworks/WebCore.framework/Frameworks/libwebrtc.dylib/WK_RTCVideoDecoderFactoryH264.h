@class NSString;

@interface WK_RTCVideoDecoderFactoryH264 : NSObject <RTCVideoDecoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedCodecs;
- (id)createDecoder:(id)a0;

@end
