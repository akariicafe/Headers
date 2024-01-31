@class NSMutableIndexSet;

@interface TSTHiddenRowsColumnsCacheValidationCollection : NSObject

@property (retain, nonatomic) NSMutableIndexSet *visible;
@property (retain, nonatomic) NSMutableIndexSet *hidden;
@property (retain, nonatomic) NSMutableIndexSet *userVisible;
@property (retain, nonatomic) NSMutableIndexSet *userHidden;

- (id)init;
- (void).cxx_destruct;

@end
