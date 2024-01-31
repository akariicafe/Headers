@class NSString, NSSet, NSDictionary;

@interface USBudget : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSSet *categoryIdentifiers;
@property (readonly, copy) NSSet *bundleIdentifiers;
@property (readonly, copy) NSSet *webDomains;
@property (readonly, copy) NSString *calendarIdentifier;
@property (readonly, copy) NSDictionary *schedule;
@property (readonly) long long type;
@property (readonly, copy) NSSet *items;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCategories:(id)a0 applications:(id)a1 webDomains:(id)a2 schedule:(id)a3 calendarIdentifier:(id)a4 identifier:(id)a5;
- (id)initWithType:(long long)a0 items:(id)a1 schedule:(id)a2 calendarIdentifier:(id)a3 identifier:(id)a4;

@end
