@class NSString, NSURL;

@interface PLSharedAssetsContainerIncrementalChangeHighlightContainerChange : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *relationshipKey;
@property (retain, nonatomic) NSURL *sourceHighlightURI;
@property (retain, nonatomic) NSURL *destinationHighlightURI;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
