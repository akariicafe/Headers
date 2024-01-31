@class NSError, BSActionResponse;

@interface _SWActionResponse : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL success;
@property (retain, nonatomic) NSError *error;
@property (readonly, nonatomic) BSActionResponse *sourceBSActionResponse;

+ (id)responseWithDestinationResponse:(id)a0;
+ (id)responseWithSuccess:(BOOL)a0 error:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToActionResponse:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSActionResponseSettings:(id)a0;
- (id)initWithDestinationResponse:(id)a0;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1;

@end
