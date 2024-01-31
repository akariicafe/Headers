@class NSString, NSDictionary;

@interface RKResponse : NSObject

@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSDictionary *attributes;
@property (copy, nonatomic) NSString *category;

- (void).cxx_destruct;
- (id)initWithString:(id)a0 attributes:(id)a1 category:(id)a2;

@end
