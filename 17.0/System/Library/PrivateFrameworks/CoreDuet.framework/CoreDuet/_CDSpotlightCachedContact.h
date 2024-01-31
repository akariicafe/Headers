@class CNContact, NSDate;

@interface _CDSpotlightCachedContact : NSObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (readonly, copy, nonatomic) CNContact *contact;

- (void).cxx_destruct;
- (id)initWithExpirationDate:(id)a0 contact:(id)a1;

@end
