@class NSString, NSDate;

@interface PKPaymentSetupProductConfiguration : NSObject <NSCopying>

@property (copy, nonatomic) NSString *partnerIdentifier;
@property (copy, nonatomic) NSString *productIdentifier;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *dirtyStateIdentifier;
@property (retain, nonatomic) NSDate *lastUpdated;
@property (nonatomic) unsigned long long featureIdentifier;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) NSString *notificationTitle;
@property (copy, nonatomic) NSString *notificationMessage;
@property (copy, nonatomic) NSString *discoveryCardIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProductDictionary:(id)a0;

@end
