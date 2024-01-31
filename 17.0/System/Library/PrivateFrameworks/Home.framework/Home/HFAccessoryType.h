@class NSString, NAIdentity;

@interface HFAccessoryType : NSObject <HFAccessoryRepresentableObjectFiltering, NAIdentifiable>

@property (class, readonly, nonatomic) NAIdentity *na_identity;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaSystemType;
+ (id)categoryType:(id)a0;
+ (id)serviceType:(id)a0;
+ (id)categoryTypeWithCategory:(id)a0;
+ (id)serviceType:(id)a0 subtype:(id)a1;
+ (id)serviceTypeWithService:(id)a0;

- (id)_init;
- (BOOL)isEqual:(id)a0;
- (id)filterAccessoryRepresentableObjects:(id)a0;

@end
