@class NSString, NSArray, NSNumber;

@interface SCWWatchlist : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSArray *symbols;
@property (readonly, copy, nonatomic) NSNumber *sortState;
@property (readonly, copy, nonatomic) NSNumber *sortOrderState;
@property (readonly, copy, nonatomic) NSNumber *displayState;

- (id)description;
- (id)initWithIdentifier:(id)a0 name:(id)a1 symbols:(id)a2 sortState:(id)a3 sortOrderState:(id)a4 displayState:(id)a5;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
