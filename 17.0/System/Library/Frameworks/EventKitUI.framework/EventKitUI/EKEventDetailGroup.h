@class NSArray, NSString;

@interface EKEventDetailGroup : NSObject

@property (nonatomic) long long tag;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *headerTitle;

- (unsigned long long)numberOfRows;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1 forceUpdate:(BOOL)a2;
- (void)updateCellLayoutsForRowCountIfNeededUsingWidth:(double)a0;
- (id)cellForSubitemAtIndex:(unsigned long long)a0 withTraitCollection:(id)a1;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)itemAtIndex:(unsigned long long)a0 subitemIndex:(unsigned long long *)a1;
- (id)initWithTag:(long long)a0 headerTitle:(id)a1;
- (BOOL)hasSubitemForIndexPathRow:(unsigned long long)a0;
- (double)defaultCellHeightForSubitemAtIndex:(unsigned long long)a0 forWidth:(double)a1;
- (id)description;
- (void).cxx_destruct;

@end
