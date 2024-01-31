@class NSURL;

@interface PCNativeAssetInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long contentType;
@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) long long length;
@property (nonatomic) double bitrate;
@property (nonatomic) BOOL autoloop;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
