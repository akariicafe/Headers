@class NSError;

@interface TRErrorResponse : TRResponseMessage

@property (retain, nonatomic) NSError *error;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
