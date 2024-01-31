@class NSArray, NSString;

@interface SACalendarEventSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *results;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventSearchCompleted;
+ (id)eventSearchCompletedWithDictionary:(id)a0 context:(id)a1;
+ (id)eventSearchCompletedWithResults:(id)a0;

@end
