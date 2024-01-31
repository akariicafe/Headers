@class NSString, NSArray;

@interface GDGraphQuantityRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *quantity;
@property (readonly, copy, nonatomic) NSArray *allQuantity;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQuantityField:(id)a0 allQuantityField:(id)a1;

@end
