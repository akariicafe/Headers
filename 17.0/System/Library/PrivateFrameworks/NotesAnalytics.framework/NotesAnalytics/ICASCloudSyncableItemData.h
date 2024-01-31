@class NSString, NSNumber;

@interface ICASCloudSyncableItemData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *syncableDataType;
@property (readonly, nonatomic) NSNumber *count;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSyncableDataType:(id)a0 count:(id)a1;

@end
