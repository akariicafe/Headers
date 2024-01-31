@class NSString;

@interface WBSHistoryServiceItem : WBSHistoryServiceObject

@property (nonatomic) long long visitCount;
@property (nonatomic) long long statusCode;
@property (readonly, nonatomic) NSString *url;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithSQLRow:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithItem:(id)a0;

@end
