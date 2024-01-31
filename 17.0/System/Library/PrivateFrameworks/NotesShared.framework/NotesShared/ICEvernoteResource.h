@class NSString, NSData;

@interface ICEvernoteResource : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isAttachment;
@property (copy, nonatomic) NSString *mime;
@property (copy, nonatomic) NSString *fileName;
@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSString *sha256Hash;
@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;
@property (nonatomic) double duration;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
