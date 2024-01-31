@class NSError, NSNumber, NSString;

@interface ASDViewPresentationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSNumber *numberResult;
@property (readonly, nonatomic) NSString *stringResult;

- (id)initWithError:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithNumber:(id)a0;

@end
