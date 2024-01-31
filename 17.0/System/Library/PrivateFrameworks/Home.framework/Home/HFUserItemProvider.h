@class HMHome, NSMutableSet;

@interface HFUserItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *userItems;
@property (nonatomic) BOOL includeCurrentUser;
@property (nonatomic) BOOL includeOtherUsers;
@property (nonatomic) unsigned long long nameStyle;
@property (readonly, nonatomic) HMHome *home;

- (id)init;
- (id)items;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)reloadItems;
- (id)initWithHome:(id)a0;
- (id)invalidationReasons;

@end
