@class NSError, NSNumber;

@interface ASDPurchaseResult : NSObject <NSCopying, NSSecureCoding> {
    NSNumber *_itemID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuccess:(BOOL)a0 error:(id)a1;

@end
