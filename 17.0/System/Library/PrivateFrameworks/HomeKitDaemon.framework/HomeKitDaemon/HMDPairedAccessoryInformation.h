@class NSString, NSData;
@protocol HMDAccessoryBrowserDelegate;

@interface HMDPairedAccessoryInformation : NSObject

@property (readonly) NSString *identifier;
@property (readonly) NSData *setupHash;
@property (readonly) unsigned long long transports;
@property (readonly, weak) id<HMDAccessoryBrowserDelegate> delegate;

- (id)init;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 transports:(unsigned long long)a1 setupHash:(id)a2 delegate:(id)a3;

@end
