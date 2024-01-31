@class NSNumber, NSArray, NSString;

@interface GDGraphLocationLatLongRelationship : NSObject <GDGraphObjectRelationship>

@property (readonly, copy, nonatomic) NSNumber *latitude;
@property (readonly, copy, nonatomic) NSNumber *longitude;
@property (readonly, copy, nonatomic) NSArray *allLatitude;
@property (readonly, copy, nonatomic) NSArray *allLongitude;
@property (readonly, copy, nonatomic) Class graphObjectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithLatitudeField:(id)a0 longitudeField:(id)a1 allLatitudeField:(id)a2 allLongitudeField:(id)a3;

@end
