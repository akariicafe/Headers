@class NSArray;

@interface ICURLBagMescalConfiguration : NSObject

@property (nonatomic) BOOL shouldSignBody;
@property (nonatomic) BOOL shouldIncludePath;
@property (copy, nonatomic) NSArray *fields;
@property (copy, nonatomic) NSArray *headers;

- (id)description;
- (void).cxx_destruct;

@end
