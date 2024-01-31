@class NSString;

@interface VSPreviewRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *languageCode;
@property (copy, nonatomic) NSString *voiceName;
@property (nonatomic) long long previewType;
@property (nonatomic) unsigned long long requestCreatedTimestamp;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
