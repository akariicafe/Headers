@class NSString, NSError, NSDate;

@interface HAPKeychainStoreRemovedAccessory : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSString *accessoryName;
@property (readonly, nonatomic) NSDate *creationDate;
@property (retain, nonatomic) NSError *removeError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithName:(id)a0 creationDate:(id)a1;

@end
