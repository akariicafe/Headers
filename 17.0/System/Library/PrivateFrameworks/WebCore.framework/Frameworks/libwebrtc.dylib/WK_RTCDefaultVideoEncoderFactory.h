@class NSString;

@interface WK_RTCDefaultVideoEncoderFactory : NSObject <RTCVideoEncoderFactory> {
    BOOL _supportsH265;
    BOOL _supportsVP9Profile0;
    BOOL _supportsVP9Profile2;
    BOOL _useLowLatencyH264;
    BOOL _supportsAv1;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)supportedCodecs;
+ (id)supportedCodecsWithH265:(BOOL)a0 vp9Profile0:(BOOL)a1 vp9Profile2:(BOOL)a2 av1:(BOOL)a3;

- (id)supportedCodecs;
- (id)createEncoder:(id)a0;
- (id)initWithH265:(BOOL)a0 vp9Profile0:(BOOL)a1 vp9Profile2:(BOOL)a2 lowLatencyH264:(BOOL)a3 av1:(BOOL)a4;

@end
