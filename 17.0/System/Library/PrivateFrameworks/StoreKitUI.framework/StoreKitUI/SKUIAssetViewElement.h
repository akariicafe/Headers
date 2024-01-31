@class NSString, NSURL;

@interface SKUIAssetViewElement : SKUIViewElement

@property (nonatomic) double initialPlaybackTime;
@property (readonly, nonatomic) long long itemIdentifier;
@property (readonly, copy, nonatomic) NSString *secureKeyDeliveryType;
@property (readonly, nonatomic, getter=isITunesStream) BOOL ITunesStream;
@property (readonly, retain, nonatomic) NSURL *keyCertificateURL;
@property (readonly, retain, nonatomic) NSURL *keyServerURL;
@property (readonly, nonatomic) double playbackDuration;
@property (readonly, nonatomic) NSURL *URL;

- (void).cxx_destruct;
- (id)applyUpdatesWithElement:(id)a0;
- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
