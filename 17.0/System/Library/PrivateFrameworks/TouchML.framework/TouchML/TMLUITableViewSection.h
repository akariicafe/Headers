@class NSArray, NSString;

@interface TMLUITableViewSection : NSObject

@property (copy, nonatomic) NSArray *rows;
@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *footer;
@property (readonly, nonatomic) long long numberOfRows;

- (void).cxx_destruct;
- (id)cellForRow:(long long)a0;

@end
