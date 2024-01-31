@class NSString, NSData, NSDate;

@interface _CDContextualChangeRegistrationMO : NSManagedObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSData *properties;
@property (retain, nonatomic) NSDate *creationDate;
@property (nonatomic) BOOL isMultiDeviceRegistration;
@property (nonatomic) BOOL isActive;

+ (id)predicateForActiveRegistrationsInBootSession:(id)a0;
+ (void)hydrateMO:(id)a0 fromRegistration:(id)a1;
+ (id)materializedRegistrationFrom:(id)a0;

@end
