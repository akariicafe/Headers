@class NSString, NSArray;

@interface GEOETATrafficUpdateErrorInfo : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSString *key;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *internalErrors;

- (id)initWithResponse:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
