@class NSString;

@interface SGEntityExtractionInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *spotlightIdentifier;
@property (readonly, nonatomic) NSString *source;
@property (readonly, nonatomic) long long entityType;
@property (readonly, nonatomic) struct SGUnixTimestamp_ { double secondsFromUnixEpoch; } creationTimestamp;
@property (readonly, nonatomic) long long extractionType;
@property (readonly, nonatomic) NSString *contactIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpotlightIdentifier:(id)a0 source:(id)a1 entityType:(long long)a2 creationTimestamp:(struct SGUnixTimestamp_ { double x0; })a3 extractionType:(long long)a4 contactIdentifier:(id)a5;

@end
