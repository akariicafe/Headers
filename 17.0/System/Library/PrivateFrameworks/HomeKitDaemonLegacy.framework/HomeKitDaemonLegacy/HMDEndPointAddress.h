@class NSString, NSNumber, NSData;

@interface HMDEndPointAddress : HAPTLVBase <HAPTLVCreateParse, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *ipAddress;
@property (readonly, nonatomic) BOOL isIPv6Address;
@property (readonly, copy, nonatomic) NSNumber *videoRTPPort;
@property (readonly, copy, nonatomic) NSNumber *audioRTPPort;
@property (readonly, copy) NSData *tlvData;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (BOOL)_parseFromTLVData;
- (BOOL)compatibleWithRemoteEndPoint:(id)a0;
- (id)initWithIPAddress:(id)a0 isIPv6Address:(BOOL)a1 videoRTPPort:(id)a2 audioRTPPort:(id)a3;

@end
