@class NSMutableDictionary, NSObject;
@protocol OS_nw_channel;

@interface NENexusFlowManager : NSObject {
    NSObject<OS_nw_channel> *_kernelChannel;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *_protocol;
    struct nw_protocol { unsigned char x0[16]; struct nw_protocol_identifier *x1; struct nw_protocol_callbacks *x2; struct nw_protocol *x3; void *x4; struct nw_protocol *x5; void *x6; } *_defaultInputProtocol;
    NSMutableDictionary *_userChannels;
}

- (void)dealloc;
- (void).cxx_destruct;

@end
