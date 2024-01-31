@interface RTIDocumentRequest : NSObject <NSSecureCoding, NSCopying> {
    BOOL _didSetRectGranularity;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long flags;
@property (nonatomic) long long textGranularity;
@property (nonatomic) long long rectGranularity;
@property (nonatomic) long long surroundingGranularityCount;
@property (nonatomic) long long rectCountBefore;
@property (nonatomic) long long rectCountAfter;

- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
