@class MKFCKHome, NSUUID, NSDictionary, NSString, NSArray, NSDate;

@interface MKFCKServiceGroup : MKFCKHomeObject

@property (retain, nonatomic) NSDictionary *applicationData;
@property (copy, nonatomic) NSUUID *flags;
@property (copy, nonatomic) NSUUID *homeModelID;
@property (copy, nonatomic) NSUUID *modelID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *services;
@property (copy, nonatomic) NSDate *writerTimestamp;
@property (copy, nonatomic) NSString *writerVersion;
@property (retain, nonatomic) MKFCKHome *home;

+ (id)fetchRequest;

- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;

@end
