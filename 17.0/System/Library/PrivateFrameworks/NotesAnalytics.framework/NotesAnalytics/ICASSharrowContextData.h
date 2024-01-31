@class NSString;

@interface ICASSharrowContextData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) NSString *sharrowSelectedItem;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithSharrowSelectedItem:(id)a0;

@end
