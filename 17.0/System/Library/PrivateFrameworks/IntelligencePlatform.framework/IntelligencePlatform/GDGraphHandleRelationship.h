@class NSString, NSArray;

@interface GDGraphHandleRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSArray *emailAddresses;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers;
@property (readonly, copy, nonatomic) NSArray *allLabel;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLabelField:(id)a0 emailAddressesField:(id)a1 phoneNumbersField:(id)a2 allLabelField:(id)a3;

@end
