@class NSString, NSDate;

@interface NTKFaceSupportPartialUnlockAttemptEvent : NSObject

@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long method;

- (id)initWithIdentifier:(id)a0 method:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)unlockAttemptWithStatus:(unsigned long long)a0 errorCode:(long long)a1;

@end
