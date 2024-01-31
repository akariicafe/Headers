@class NSString, NSDate;

@interface RTSettledStateTransition : NSObject <RTCoreDataReadable, RTCoreDataWritable>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long transitionFromType;
@property (readonly, nonatomic) long long transitionToType;

+ (id)createWithManagedObject:(id)a0;
+ (id)createWithSettledStateTransitionMO:(id)a0;

@end
