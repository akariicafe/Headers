@class NSMutableArray;

@interface SSTokenMatch : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSMutableArray *indexes;

- (void).cxx_destruct;
- (BOOL)exactMatchAtFirstPosition;

@end
