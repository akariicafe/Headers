@class NSString;

@interface WK_RTCVideoEncoderFactoryH264 : NSObject <RTCVideoEncoderFactory>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedCodecs;
- (id)createEncoder:(id)a0;

@end
