@class NSString, NSData;

@interface MPNowPlayingInfoTransportableSessionResponse : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *sessionType;
@property (readonly, nonatomic) NSData *data;

+ (id)responseWithIdentifier:(id)a0 sessionType:(id)a1 data:(id)a2;

- (id)_init;
- (void).cxx_destruct;

@end
