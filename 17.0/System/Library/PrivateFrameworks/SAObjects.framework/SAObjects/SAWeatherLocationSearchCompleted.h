@class NSArray, NSString;

@interface SAWeatherLocationSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *weatherLocations;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)locationSearchCompleted;
+ (id)locationSearchCompletedWithDictionary:(id)a0 context:(id)a1;
+ (id)locationSearchCompletedWithWeatherLocations:(id)a0;

@end
