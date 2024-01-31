@class NSString;

@interface WK_RTCDefaultVideoDecoderFactory : NSObject <RTCVideoDecoderFactory> {
    BOOL _supportsH265;
    BOOL _supportsVP9Profile0;
    BOOL _supportsVP9Profile2;
    BOOL _supportsVP9VTB;
    BOOL _supportsAv1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)supportedCodecs;
- (id)createDecoder:(id)a0;
- (id)initWithH265:(BOOL)a0 vp9Profile0:(BOOL)a1 vp9Profile2:(BOOL)a2 vp9VTB:(BOOL)a3 av1:(BOOL)a4;

@end
