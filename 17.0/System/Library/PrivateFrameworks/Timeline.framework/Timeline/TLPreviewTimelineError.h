@class NSString;

@interface TLPreviewTimelineError : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long errorType;
@property (readonly, nonatomic) NSString *errorDescription;
@property (readonly, nonatomic) NSString *path;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithErrorType:(long long)a0 errorDescription:(id)a1;
- (id)initWithErrorType:(long long)a0 errorDescription:(id)a1 path:(id)a2;

@end
