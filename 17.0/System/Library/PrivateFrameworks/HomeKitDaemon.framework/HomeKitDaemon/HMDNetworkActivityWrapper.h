@class NSSet, NSMutableSet, NSObject;
@protocol OS_nw_activity;

@interface HMDNetworkActivityWrapper : NSObject

@property (readonly, nonatomic) NSMutableSet *mutableChildren;
@property (nonatomic) BOOL completed;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *activity;
@property (readonly, nonatomic) BOOL isActivated;
@property (readonly, nonatomic) unsigned long long label;
@property (readonly, weak, nonatomic) HMDNetworkActivityWrapper *parent;
@property (readonly, nonatomic) NSSet *children;

- (void)setParent:(id)a0;
- (id)initWithLabel:(unsigned long long)a0;
- (void)activate;
- (void).cxx_destruct;
- (id)childActivityWithLabel:(unsigned long long)a0 createIfNeeded:(BOOL)a1;
- (void)completeWithSuccess:(BOOL)a0;
- (void)submitMetrics:(id)a0 withName:(id)a1;

@end
