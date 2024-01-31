@class NSString, IRServiceMO;

@interface IRMiLoServiceMO : NSManagedObject

@property (retain, nonatomic) NSString *serviceUuidString;
@property (retain, nonatomic) IRServiceMO *service;

+ (id)fetchRequest;
+ (void)setPropertiesOfMiLoServiceMO:(id)a0 withMiLoServiceUuidString:(id)a1;

- (id)convert;

@end
