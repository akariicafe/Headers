@class NSURL, NSString, NSData;

@interface UCAppClipCodeURLEncodingResult : NSObject

@property (retain, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *rawEncodedBits;
@property (readonly, nonatomic) NSData *appClipCodeBytes;
@property (nonatomic) long long hostEncodedBitCount;
@property (nonatomic) long long hostEncodingFormat;
@property (nonatomic) BOOL hasPathOrQueryEncoding;
@property (nonatomic) long long templateType;
@property (nonatomic) long long subdomainType;
@property (nonatomic) long long nonTemplatePathAndQueryEncodeType;

+ (id)resultWithRawEncodedBits:(id)a0 appClipCodeBytes:(id)a1;

- (void).cxx_destruct;
- (id)initWithRawEncodedBits:(id)a0 appClipCodeBytes:(id)a1;

@end
