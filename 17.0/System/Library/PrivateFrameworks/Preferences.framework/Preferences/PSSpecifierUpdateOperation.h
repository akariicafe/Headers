@class NSNumber, PSSpecifier;

@interface PSSpecifierUpdateOperation : NSObject <NSCopying>

@property (readonly, nonatomic) long long operation;
@property (retain, nonatomic) PSSpecifier *specifier;
@property (retain, nonatomic) NSNumber *index;
@property (retain, nonatomic) NSNumber *toIndex;
@property (nonatomic) BOOL removingGroupSpecifierRemovesEntireGroup;

+ (id)_removeOneSpecifierOnlyOperationWithSpecifier:(id)a0 atIndex:(unsigned long long)a1;
+ (id)insertOperationWithSpecifier:(id)a0 atIndex:(unsigned long long)a1;
+ (id)moveOperationWithSpecifier:(id)a0 fromIndex:(unsigned long long)a1 toIndex:(unsigned long long)a2;
+ (id)reloadOperationWithSpecifier:(id)a0 atIndex:(unsigned long long)a1;
+ (id)removeOperationWithSpecifier:(id)a0 atIndex:(unsigned long long)a1;

- (id)description;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)applyToArray:(id)a0;
- (id)initWithOperation:(long long)a0 specifier:(id)a1 fromIndex:(id)a2 toIndex:(id)a3;
- (id)initWithOperation:(long long)a0 specifier:(id)a1 fromIndex:(id)a2 toIndex:(id)a3 removingGroupSpecifierRemovesEntireGroup:(BOOL)a4;
- (id)initWithOperation:(long long)a0 specifier:(id)a1 index:(id)a2;

@end
