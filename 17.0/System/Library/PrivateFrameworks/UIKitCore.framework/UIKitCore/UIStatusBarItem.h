@class NSString;

@interface UIStatusBarItem : NSObject {
    long long _idiom;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) Class viewClass;
@property (readonly, nonatomic) int priority;
@property (readonly, nonatomic) int leftOrder;
@property (readonly, nonatomic) int rightOrder;
@property (readonly, nonatomic) NSString *indicatorName;

+ (BOOL)itemType:(int)a0 idiom:(long long)a1 appearsInRegion:(int)a2;
+ (BOOL)isItemWithTypeExclusive:(int)a0 outBlacklistItems:(id *)a1 outWhitelistItems:(id *)a2;
+ (BOOL)itemType:(int)a0 idiom:(long long)a1 canBeEnabledForData:(id)a2 style:(id)a3;
+ (id)itemWithType:(int)a0 idiom:(long long)a1;
+ (BOOL)typeIsValid:(int)a0;

- (long long)comparePriority:(id)a0;
- (id)description;
- (id)initWithType:(int)a0;
- (BOOL)appearsOnCenter;
- (BOOL)appearsInRegion:(int)a0;
- (BOOL)appearsOnLeft;
- (BOOL)appearsOnRight;
- (int)centerOrder;
- (long long)compareCenterOrder:(id)a0;
- (long long)compareLeftOrder:(id)a0;
- (long long)compareRightOrder:(id)a0;

@end
